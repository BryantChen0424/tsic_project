module connect4 (
    input clk,
    input rst_n,
    
    output reg  op_ready,
    input       op_valid,
    input       op_player_id,
    input [2:0] op_col_id,

    input       re_ready,
    output reg  re_valid,
    output reg  re_err,
    output reg  re_is_finished,
    output reg  re_winner,
    output reg  re_tie
);

localparam S_WAIT_OP  = 0,
           S_DROP     = 1,
           S_GO_JUDGE = 2,
           S_JUDGE    = 3,
           S_RE       = 4;



reg  op_ready_nxt;
reg  re_valid_nxt;
reg  re_err_nxt;
reg  re_is_finished_nxt;
reg  re_winner_nxt;
reg  re_tie_nxt;

reg [3:0] S, S_nxt;

reg [41:0] occupied/* verilator public */;
reg [41:0] whos/* verilator public */;
reg [41:0] occupied_nxt;
reg [41:0] whos_nxt;
reg player_id, player_id_nxt;
reg [2:0] col_id, col_id_nxt;
reg [2:0] row_id, row_id_nxt;

wire wj_op_ready;
reg wj_op_valid, wj_op_valid_nxt;

reg wj_re_ready, wj_re_ready_nxt;
wire wj_re_valid;
wire wj_re_is_finished;

win_judge wj (
    .clk(clk),
    .rst_n(rst_n),

    .occupied(occupied),
    .whos(whos),

    .op_ready(wj_op_ready),
    .op_valid(wj_op_valid),

    .re_ready(wj_re_ready),
    .re_valid(wj_re_valid),
    .re_is_finished(wj_re_is_finished)
);

reg op_fire, re_fire, wj_op_fire, wj_re_fire;
reg [6:0] col_full;

integer i;

always @(*) begin
    op_fire = op_ready & op_valid;
    re_fire = re_ready & re_valid;
    wj_op_fire = wj_op_ready & wj_op_valid;
    wj_re_fire = wj_re_ready & wj_re_valid;

    col_full = occupied[6:0];

    op_ready_nxt = op_ready;
    re_valid_nxt = re_valid;
    re_err_nxt = re_err;
    re_is_finished_nxt = re_is_finished;
    re_winner_nxt = re_winner;
    re_tie_nxt = re_tie;

    S_nxt = S;

    occupied_nxt = occupied;
    whos_nxt = whos;
    player_id_nxt = player_id;
    col_id_nxt = col_id;
    row_id_nxt = row_id;

    wj_op_valid_nxt = wj_op_valid;

    wj_re_ready_nxt = wj_re_ready;

    case (S)
        S_WAIT_OP: begin
            if (op_fire) begin
                op_ready_nxt = 0;

                player_id_nxt = op_player_id;
                col_id_nxt = op_col_id;
                if (col_full[op_col_id]) begin
                    re_valid_nxt = 1;
                    re_err_nxt = 1;
                    re_is_finished_nxt = 0;
                    re_winner_nxt = 0;
                    re_tie_nxt = 0;
                    S_nxt = S_RE;
                end
                else begin
                    {occupied_nxt[op_col_id], whos_nxt[op_col_id]} = {1'b1, op_player_id};
                    row_id_nxt = 0;
                    S_nxt = S_DROP;
                end
            end
        end
        S_DROP: begin
            // occupied: is the cell occupied by a gaming piece? 1 for yes, 0 for no.
            // whos: if the cell is occupied, who is on the cell? 1 for player1, 0 for player0.
            // row_id: the row where the droping gaming piece at.
            if (/* dropping stops condition */) begin
                // hint: When should the gaming piece stops dropping?
                // 1. It's in the bottom (row_id is 5)
                // 2. The next row of the same column is occupied
                wj_op_valid_nxt = 1;
                S_nxt = S_GO_JUDGE;
            end
            else begin 
                {occupied_nxt[ row_id    * 7 + col_id], whos_nxt[ row_id    * 7 + col_id]} = /* how to clear the cell the gaming piece just drops throw */
                {occupied_nxt[(row_id+1) * 7 + col_id], whos_nxt[(row_id+1) * 7 + col_id]} = /* how to fill the cell the gaming piece drops to */
                row_id_nxt = row_id + 1;
                S_nxt = S_DROP;
            end
        end
        S_GO_JUDGE: begin
            if (wj_op_fire) begin
                wj_re_ready_nxt = 1;

                wj_op_valid_nxt = 0;

                S_nxt = S_JUDGE;
            end
        end
        S_JUDGE: begin
            if (wj_re_fire) begin
                wj_re_ready_nxt = 0;

                re_valid_nxt = 1;
                re_err_nxt = 0;
                re_is_finished_nxt = wj_re_is_finished | (&col_full);
                re_tie_nxt = (&col_full) & ~wj_re_is_finished;
                re_winner_nxt = wj_re_is_finished ? player_id : 0;

                S_nxt = S_RE;
            end
        end
        S_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;

                re_valid_nxt = 0;
                re_err_nxt = 0;
                re_is_finished_nxt = 0;
                re_winner_nxt = 0;
                re_tie_nxt = 0;

                if (re_is_finished) begin
                    occupied_nxt = 42'b0;
                    whos_nxt = 42'b0;
                    player_id_nxt = 0;
                    col_id_nxt = 0;
                    row_id_nxt = 0;
                end

                S_nxt = S_WAIT_OP;
            end
        end
        default: begin
        end
    endcase
end

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        S <= S_WAIT_OP;

        op_ready <= 1;
        re_valid <= 0;
        re_err <= 0;
        re_is_finished <= 0;
        re_winner <= 0;
        re_tie <= 0;

        occupied <= 42'b0;
        whos <= 42'b0;
        player_id <= 0;
        col_id <= 0;
        row_id <= 0;

        wj_op_valid <= 0;

        wj_re_ready <= 0;
    end
    else begin
        S <= S_nxt;

        op_ready <= op_ready_nxt;
        re_valid <= re_valid_nxt;
        re_err <= re_err_nxt;
        re_is_finished <= re_is_finished_nxt;
        re_winner <= re_winner_nxt;
        re_tie <= re_tie_nxt;

        occupied <= occupied_nxt;
        whos <= whos_nxt;
        player_id <= player_id_nxt;
        col_id <= col_id_nxt;
        row_id <= row_id_nxt;

        wj_op_valid <= wj_op_valid_nxt;

        wj_re_ready <= wj_re_ready_nxt;
    end
end

endmodule

module win_judge (
    input clk,
    input rst_n,

    input [41:0] occupied,
    input [41:0] whos,

    output reg  op_ready,
    input       op_valid,

    input       re_ready,
    output reg  re_valid,
    output reg  re_is_finished
);

localparam S_IDLE = 0,
           S_DETECT_V = 1,
           S_DETECT_H = 2,
           S_DETECT_RISE = 3,
           S_DETECT_FALL = 4,
           S_RE = 5;

reg op_ready_nxt;
reg re_valid_nxt;
reg re_is_finished_nxt;

reg [3:0] S, S_nxt;

reg [2:0] rlim, rlim_nxt;
reg [2:0] llim, llim_nxt;
reg [2:0] tlim, tlim_nxt;
reg [2:0] blim, blim_nxt;

reg [2:0] c, c_nxt;
reg [2:0] r, r_nxt;

reg op_fire, re_fire;

reg occupied_all;
reg whos_all;
reg [2:0] c0, c1, c2, c3, r0, r1, r2, r3;

always @(*) begin
    op_fire = op_ready & op_valid;
    re_fire = re_ready & re_valid;
    occupied_all = 0;
    whos_all = 0;
    c0 = 0; c1 = 0; c2 = 0; c3 = 0;
    r0 = 0; r1 = 0; r2 = 0; r3 = 0;

    op_ready_nxt = op_ready;
    re_valid_nxt = re_valid;
    re_is_finished_nxt = re_is_finished;

    S_nxt = S;

    rlim_nxt = rlim;
    llim_nxt = llim;
    tlim_nxt = tlim;
    blim_nxt = blim;

    c_nxt = c;
    r_nxt = r;

    case (S)
        S_IDLE: begin
            if (op_fire) begin
                op_ready_nxt = 0;
                
                rlim_nxt = 0;
                llim_nxt = 6;
                tlim_nxt = 0;
                blim_nxt = 2;

                c_nxt = rlim_nxt;
                r_nxt = tlim_nxt;

                S_nxt = S_DETECT_V;
            end
        end
        S_DETECT_V: begin
            c0 = c; r0 = r    ;
            c1 = c; r1 = r + 1;
            c2 = c; r2 = r + 2;
            c3 = c; r3 = r + 3;
            occupied_all = ( & {occupied[r0 * 7 + c0], occupied[r1 * 7 + c1], occupied[r2 * 7 + c2], occupied[r3 * 7 + c3]});
            whos_all     = ( & {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]}) |
                           (~| {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]});
            

            c_nxt = (c == llim) ? rlim : c + 1;
            r_nxt = (c == llim) ? r + 1 : r;

            if (occupied_all && whos_all) begin
                // if the occupied_all and whos_all are both true, the current testing 4-cell-line is occupied by a single player.
                // finished condition is satisfied, how to set the return signals and which state to go?
                re_valid_nxt       = /* */
                re_is_finished_nxt = /* */
                S_nxt              = /* */
            end
            else begin
                if (c == llim && r == blim) begin
                    rlim_nxt = 0;
                    llim_nxt = 3;
                    tlim_nxt = 0;
                    blim_nxt = 5;

                    c_nxt = rlim_nxt;
                    r_nxt = tlim_nxt;

                    S_nxt = S_DETECT_H;
                end
            end
        end
        S_DETECT_H: begin
            c0 = c    ; r0 = r;
            c1 = c + 1; r1 = r;
            c2 = c + 2; r2 = r;
            c3 = c + 3; r3 = r;
            occupied_all = ( & {occupied[r0 * 7 + c0], occupied[r1 * 7 + c1], occupied[r2 * 7 + c2], occupied[r3 * 7 + c3]});
            whos_all     = ( & {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]}) |
                           (~| {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]});
            
            c_nxt = (c == llim) ? rlim : c + 1;
            r_nxt = (c == llim) ? r + 1 : r;

            if (occupied_all && whos_all) begin
                // if the occupied_all and whos_all are both true, the current testing 4-cell-line is occupied by a single player.
                // finished condition is satisfied, how to set the return signals and which state to go?
                re_valid_nxt       = /* */
                re_is_finished_nxt = /* */
                S_nxt              = /* */
            end
            else begin
                if (c == llim && r == blim) begin
                    rlim_nxt = 0;
                    llim_nxt = 3;
                    tlim_nxt = 3;
                    blim_nxt = 5;

                    c_nxt = rlim_nxt;
                    r_nxt = tlim_nxt;

                    S_nxt = S_DETECT_RISE;
                end
            end
        end
        S_DETECT_RISE: begin
            c0 = c    ; r0 = r    ;
            c1 = c + 1; r1 = r - 1;
            c2 = c + 2; r2 = r - 2;
            c3 = c + 3; r3 = r - 3;
            occupied_all = ( & {occupied[r0 * 7 + c0], occupied[r1 * 7 + c1], occupied[r2 * 7 + c2], occupied[r3 * 7 + c3]});
            whos_all     = ( & {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]}) |
                           (~| {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]});
            
            c_nxt = (c == llim) ? rlim : c + 1;
            r_nxt = (c == llim) ? r + 1 : r;

            if (occupied_all && whos_all) begin
                // if the occupied_all and whos_all are both true, the current testing 4-cell-line is occupied by a single player.
                // finished condition is satisfied, how to set the return signals and which state to go?
                re_valid_nxt       = /* */
                re_is_finished_nxt = /* */
                S_nxt              = /* */
            end
            else begin
                if (c == llim && r == blim) begin
                    rlim_nxt = 0;
                    llim_nxt = 3;
                    tlim_nxt = 0;
                    blim_nxt = 2;

                    c_nxt = rlim_nxt;
                    r_nxt = tlim_nxt;

                    S_nxt = S_DETECT_FALL;
                end
            end
        end
        S_DETECT_FALL: begin
            c0 = c    ; r0 = r    ;
            c1 = c + 1; r1 = r + 1;
            c2 = c + 2; r2 = r + 2;
            c3 = c + 3; r3 = r + 3;
            occupied_all = ( & {occupied[r0 * 7 + c0], occupied[r1 * 7 + c1], occupied[r2 * 7 + c2], occupied[r3 * 7 + c3]});
            whos_all     = ( & {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]}) |
                           (~| {whos    [r0 * 7 + c0], whos    [r1 * 7 + c1], whos    [r2 * 7 + c2], whos    [r3 * 7 + c3]});
            
            c_nxt = (c == llim) ? rlim : c + 1;
            r_nxt = (c == llim) ? r + 1 : r;

            if (occupied_all && whos_all) begin
                // if the occupied_all and whos_all are both true, the current testing 4-cell-line is occupied by a single player.
                // finished condition is satisfied, how to set the return signals and which state to go?
                re_valid_nxt       = /* */
                re_is_finished_nxt = /* */
                S_nxt              = /* */
            end
            else begin
                if (c == llim && r == blim) begin
                    re_valid_nxt = 1;
                    re_is_finished_nxt = 0;
                    S_nxt = S_RE;
                end
            end
        end
        S_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;
                re_valid_nxt = 0;
                re_is_finished_nxt = 0;
                S_nxt = S_IDLE;
            end
        end
        default: begin
        end
    endcase
end

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        op_ready <= 1;
        re_valid <= 0;
        re_is_finished <= 0;

        S <= S_IDLE;
        rlim <= 0;
        llim <= 0;
        tlim <= 0;
        blim <= 0;
        c    <= 0;
        r    <= 0;
    end
    else begin
        op_ready <= op_ready_nxt;
        re_valid <= re_valid_nxt;
        re_is_finished <= re_is_finished_nxt;

        S <= S_nxt;

        rlim <= rlim_nxt;
        llim <= llim_nxt;
        tlim <= tlim_nxt;
        blim <= blim_nxt;
        c <= c_nxt;
        r <= r_nxt;
    end
end

endmodule