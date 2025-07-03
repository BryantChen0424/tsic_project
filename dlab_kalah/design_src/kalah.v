module kalah (
    input       clk,
    input       rst_n,
    output reg  op_ready,
    input       op_valid,
    input       op_player_id,
    input [2:0] op_pit_id,

    input       re_ready,
    output reg  re_valid,
    output reg  re_operr,
    output reg  re_next_player_id,
    output reg  re_is_finished,
    output reg [7:0] re_player0_score,
    output reg [7:0] re_player1_score
);

reg  op_ready_nxt;
reg  re_valid_nxt;
reg  re_operr_nxt;
reg  re_next_player_id_nxt;
reg  re_is_finished_nxt;
reg [7:0] re_player0_score_nxt;
reg [7:0] re_player1_score_nxt;

localparam S_WAIT_OP = 0,
           S_ERR_OP = 1,
           S_LAUNCH_SOW = 2,
           S_SOW = 3,
           S_LAUNCH_CAPTURE = 4,
           S_CAPTURE = 5,
           S_RE =  6;

localparam BOP_N   = 0,
           BOP_SOW = 1,
           BOP_CAP = 2,
           BOP_RST = 3;


wire       board_op_ready;
reg        board_op_valid    , board_op_valid_nxt;
reg        board_op_player_id, board_op_player_id_nxt;
reg  [2:0] board_op_pit_id   , board_op_pit_id_nxt;
reg  [1:0] board_op_op       , board_op_op_nxt;

reg        board_re_ready, board_re_ready_nxt;
wire       board_re_valid;
wire       board_re_err;
wire       board_re_player_id;
wire [2:0] board_re_pit_id;
wire [7:0] board_re_nseeds;

wire       board_gg;
wire [7:0] board_player0_score;
wire [7:0] board_player1_score;

reg [3:0] S        , S_nxt;
reg       player_id, player_id_nxt;
reg [2:0] pit_id   , pit_id_nxt;

reg op_fire;
reg re_fire;
reg bop_fire;
reg bre_fire;

board_ctrl b_inst(
    .clk(clk),
    .rst_n(rst_n),
    .op_ready(board_op_ready),
    .op_valid(board_op_valid),
    .op_player_id(board_op_player_id),
    .op_pit_id(board_op_pit_id),
    .op_op(board_op_op),

    .re_ready(board_re_ready),
    .re_valid(board_re_valid),
    .re_err(board_re_err),
    .re_player_id(board_re_player_id),
    .re_pit_id(board_re_pit_id),
    .re_nseeds(board_re_nseeds),

    .gg(board_gg),
    .player0_score(board_player0_score),
    .player1_score(board_player1_score)
);

always @(*) begin
    op_fire = op_valid & op_ready;
    re_fire = re_valid & re_ready;
    bop_fire = board_op_valid & board_op_ready;
    bre_fire = board_re_valid & board_re_ready;

    op_ready_nxt          = op_ready;
    re_valid_nxt          = re_valid;
    re_operr_nxt          = re_operr;
    re_next_player_id_nxt = re_next_player_id;
    re_is_finished_nxt    = re_is_finished;
    re_player0_score_nxt  = re_player0_score;
    re_player1_score_nxt  = re_player1_score;

    player_id_nxt          = player_id;
    pit_id_nxt             = pit_id;

    board_op_valid_nxt     = board_op_valid;
    board_op_player_id_nxt = board_op_player_id;
    board_op_pit_id_nxt    = board_op_pit_id;
    board_op_op_nxt        = board_op_op;

    board_re_ready_nxt     = board_re_ready;

    S_nxt                  = S;
    case (S)
        S_WAIT_OP: begin
            if (op_fire) begin
                op_ready_nxt       = 0;

                player_id_nxt      = op_player_id;
                pit_id_nxt         = op_pit_id;

                board_op_valid_nxt     = /* compelete board control signals here */
                board_op_player_id_nxt = /* compelete board control signals here */
                board_op_pit_id_nxt    = /* compelete board control signals here */
                board_op_op_nxt        = /* compelete board control signals here */

                board_re_ready_nxt = 1;
                S_nxt              = S_LAUNCH_SOW;
            end
            else begin
                op_ready_nxt = 1;
            end
        end
        S_LAUNCH_SOW: begin
            if (bop_fire) begin
                board_op_valid_nxt     = /* compelete board control signals here */
                board_op_player_id_nxt = /* compelete board control signals here */
                board_op_pit_id_nxt    = /* compelete board control signals here */
                board_op_op_nxt        = /* compelete board control signals here */

                board_re_ready_nxt     = 1;
                S_nxt                  = S_SOW;
            end
        end
        S_SOW: begin
            if (bre_fire) begin
                board_re_ready_nxt     = 0;
                if (board_re_err) begin
                    re_valid_nxt = 1;
                    re_operr_nxt = 1;
                    re_next_player_id_nxt = player_id;
                    re_is_finished_nxt = 0;
                    re_player0_score_nxt = 0;
                    re_player1_score_nxt = 0;
                    S_nxt = S_RE;
                end
                else begin
                    if (board_re_player_id == player_id && board_re_nseeds == 1 && board_re_pit_id != 6) begin
                        board_op_valid_nxt     = /* compelete board control signals here */
                        board_op_player_id_nxt = /* compelete board control signals here */
                        board_op_pit_id_nxt    = /* compelete board control signals here */
                        board_op_op_nxt        = /* compelete board control signals here */

                        board_re_ready_nxt     = 1;
                        S_nxt                  = S_LAUNCH_CAPTURE;
                    end
                    else begin
                        re_valid_nxt = 1;
                        re_operr_nxt = 0;
                        re_next_player_id_nxt = (board_re_player_id == player_id && board_re_pit_id == 6) ? player_id : ~player_id;
                        re_is_finished_nxt = board_gg;
                        re_player0_score_nxt = board_gg ? board_player0_score : 0;
                        re_player1_score_nxt = board_gg ? board_player1_score : 0;
                        S_nxt = S_RE;
                    end
                end
            end
        end
        S_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;

                re_valid_nxt = 0;
                re_operr_nxt = 0;
                re_next_player_id_nxt = 0;
                re_is_finished_nxt = 0;
                S_nxt = S_WAIT_OP;
            end
        end
        S_LAUNCH_CAPTURE: begin
            if (bop_fire) begin
                board_op_valid_nxt     = /* compelete board control signals here */
                board_op_player_id_nxt = /* compelete board control signals here */
                board_op_pit_id_nxt    = /* compelete board control signals here */
                board_op_op_nxt        = /* compelete board control signals here */

                board_re_ready_nxt     = 1;
                S_nxt                  = S_CAPTURE;
            end
        end
        S_CAPTURE: begin
            if (bre_fire) begin
                board_re_ready_nxt     = 0;
                re_valid_nxt           = 1;
                re_operr_nxt           = 0;
                re_next_player_id_nxt  = ~player_id;
                re_is_finished_nxt = board_gg;
                re_player0_score_nxt = board_gg ? board_player0_score : 0;
                re_player1_score_nxt = board_gg ? board_player1_score : 0;
                S_nxt                  = S_RE;
            end
        end
        default: begin
        end
    endcase
end

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        op_ready <= 0;
        re_valid <= 0;
        re_operr <= 0;
        re_next_player_id <= 0;
        re_is_finished <= 0;
        re_player0_score <= 0;
        re_player1_score <= 0;
        board_op_valid     <= /* compelete board control signals initialization here */
        board_op_player_id <= /* compelete board control signals initialization here */
        board_op_pit_id    <= /* compelete board control signals initialization here */
        board_op_op        <= /* compelete board control signals initialization here */
        board_re_ready <= 0;
        S <= S_WAIT_OP;
        player_id <= 0;
        pit_id <= 0;
    end
    else begin
        op_ready           <= op_ready_nxt           ;
        re_valid           <= re_valid_nxt           ;
        re_operr           <= re_operr_nxt           ;
        re_next_player_id  <= re_next_player_id_nxt  ;
        re_is_finished     <= re_is_finished_nxt     ;
        re_player0_score   <= re_player0_score_nxt   ;
        re_player1_score   <= re_player1_score_nxt   ;
        board_op_valid     <= board_op_valid_nxt     ;
        board_op_player_id <= board_op_player_id_nxt ;
        board_op_pit_id    <= board_op_pit_id_nxt    ;
        board_op_op        <= board_op_op_nxt        ;
        board_re_ready     <= board_re_ready_nxt     ;
        S                  <= S_nxt                  ;
        player_id          <= player_id_nxt          ;
        pit_id             <= pit_id_nxt             ;
    end
end

always @(*) begin
    
end

endmodule

module board_ctrl (
    input        clk,
    input        rst_n,
    output reg   op_ready,
    input        op_valid,
    input        op_player_id,
    input [2:0]  op_pit_id,
    input [1:0]  op_op,

    input            re_ready,
    output reg       re_valid,
    output reg       re_err,
    output reg       re_player_id,
    output reg [2:0] re_pit_id,
    output reg [7:0] re_nseeds,
    
    output reg       gg,
    output reg [7:0] player0_score,
    output reg [7:0] player1_score
);

localparam BOP_N   = 0,
           BOP_SOW = 1,
           BOP_CAP = 2,
           BOP_RST = 3;

localparam S_IDLE = 0,
           S_SOW = 1,
           S_CAP = 2,
           S_RE = 3;

reg      op_ready_nxt;

reg      re_valid_nxt;
reg      re_err_nxt;
reg      re_player_id_nxt;
reg [2:0] re_pit_id_nxt;
reg [7:0] re_nseeds_nxt;

reg [3:0] S, S_nxt;

reg [7:0] P0[0:6]/* verilator public */;
reg [7:0] P1[0:6]/* verilator public */;
reg [7:0] P0_nxt[0:6];
reg [7:0] P1_nxt[0:6];

reg       player_id, player_id_nxt;
reg [2:0] pit_id   , pit_id_nxt;
reg [1:0] op       , op_nxt;
reg [7:0] nseeds   , nseeds_nxt;

reg       sowing_player_id , sowing_player_id_nxt;
reg [2:0] sowing_pit_id    , sowing_pit_id_nxt;
reg       last_sowing_player_id , last_sowing_player_id_nxt;
reg [2:0] last_sowing_pit_id    , last_sowing_pit_id_nxt;

reg op_fire;
reg re_fire;

reg [5:0] P0_zero;
reg [5:0] P1_zero;

integer i;

always @(*) begin

    op_fire = op_valid & op_ready;
    re_fire = re_valid & re_ready;

    for (i = 0; i < 6; i = i + 1) begin
        P0_zero[i] = ~| P0[i];
        P1_zero[i] = ~| P1[i];
    end

    op_ready_nxt = op_ready;

    re_valid_nxt = re_valid;
    re_err_nxt = re_err;
    re_player_id_nxt = re_player_id;
    re_pit_id_nxt = re_pit_id;
    re_nseeds_nxt = re_nseeds;

    sowing_player_id_nxt = sowing_player_id;
    sowing_pit_id_nxt    = sowing_pit_id;
    last_sowing_player_id_nxt = last_sowing_player_id;
    last_sowing_pit_id_nxt    = last_sowing_pit_id;

    S_nxt = S;

    for (i = 0; i < 7; i = i + 1) begin
        P0_nxt[i] = P0[i];
        P1_nxt[i] = P1[i];
    end

    player_id_nxt = player_id;
    pit_id_nxt    = pit_id;
    op_nxt        = op;
    nseeds_nxt    = nseeds;

    case (S)
        S_IDLE: begin
            if (op_fire) begin
                op_ready_nxt = 0;

                player_id_nxt = op_player_id;
                pit_id_nxt    = op_pit_id;
                op_nxt        = op_op;
                if (op_op == BOP_SOW) begin
                    if (op_pit_id == 6) begin
                        re_valid_nxt = 1;
                        re_err_nxt = 1;
                        re_player_id_nxt = 0;
                        re_pit_id_nxt = 0;
                        re_nseeds_nxt = 0;
                        S_nxt = S_RE;
                    end
                    else begin
                        sowing_player_id_nxt = op_player_id;
                        sowing_pit_id_nxt = op_pit_id + 1;
                        for (i = 0; i < 6; i = i + 1) begin
                            P0_nxt[i] = (op_player_id == 0 && op_pit_id == i) ? 0 : P0[i];
                            P1_nxt[i] = (op_player_id == 1 && op_pit_id == i) ? 0 : P1[i];
                        end
                        if (op_player_id) begin
                            nseeds_nxt = P1[op_pit_id];
                        end
                        else begin
                            nseeds_nxt = P0[op_pit_id];
                        end
                        S_nxt = S_SOW;
                    end
                end
                else if (op_op == BOP_CAP) begin
                    S_nxt = S_CAP;
                end
            end
            else begin
                op_ready_nxt = 1;
            end
        end
        S_SOW: begin
            if (nseeds == 0) begin
                re_valid_nxt = 1;
                re_err_nxt = 0;
                re_player_id_nxt = last_sowing_player_id;
                re_pit_id_nxt = last_sowing_pit_id;
                re_nseeds_nxt = last_sowing_player_id ? P1[last_sowing_pit_id] : P0[last_sowing_pit_id];
                S_nxt = S_RE;
            end
            else begin
                sowing_player_id_nxt = (sowing_pit_id == 6) ? ~sowing_player_id : sowing_player_id;
                sowing_pit_id_nxt    = (sowing_pit_id == 6) ? 0 : sowing_pit_id + 1;
                nseeds_nxt           = (sowing_pit_id == 6 && sowing_player_id == ~player_id) ? nseeds : nseeds - 1;
                for (i = 0; i < 6; i = i + 1) begin
                    // sowing_pit_id: the next pit to drop a seed in this sow
                    // sowing_player_id: the current player
                    // 
                    P0_nxt[i] = /* hint: in each drop, a pit either gets a seed(P0[i] + 1) or keeps the number of seeds (P0[i]). What's the criteria? */
                    P1_nxt[i] = /* hint: in each drop, a pit either gets a seed(P1[i] + 1) or keeps the number of seeds (P1[i]). What's the criteria? */
                end
                P0_nxt[6] = ((player_id == 0) && (sowing_pit_id == 6 && sowing_player_id == 0)) ? P0[i] + 1: P0[i];
                P1_nxt[6] = ((player_id == 1) && (sowing_pit_id == 6 && sowing_player_id == 1)) ? P1[i] + 1: P1[i];
                if (nseeds == 1) begin
                    last_sowing_player_id_nxt = sowing_player_id;
                    last_sowing_pit_id_nxt = sowing_pit_id;
                end
                S_nxt = S_SOW;
            end
        end
        S_CAP: begin
            if (player_id == 0) begin
                P0_nxt[6] = P0[6] + P0[pit_id] + P1[5-pit_id];
                for (i = 0; i < 6; i = i + 1) begin
                    // pit_id: the pit id which the capture operation choose.
                    P1_nxt[i] = /* How to remove the opposite pit? What's the id? */
                    P0_nxt[i] = (pit_id == i) ? 0 : P0[i];
                end
            end
            if (player_id == 1) begin
                P1_nxt[6] = P1[6] + P1[pit_id] + P0[5-pit_id];
                for (i = 0; i < 6; i = i + 1) begin
                    // pit_id: the pit id which the capture operation choose.
                    P0_nxt[i] = /* How to remove the opposite pit? What's the id? */
                    P1_nxt[i] = (pit_id == i) ? 0 : P1[i];
                end
            end
            re_valid_nxt = 1;
            re_err_nxt = 0;
            re_player_id_nxt = player_id;
            re_pit_id_nxt = pit_id;
            re_nseeds_nxt = 0;
            S_nxt = S_RE;
        end
        S_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;

                re_valid_nxt = 0;
                re_err_nxt = 0;
                re_player_id_nxt = 0;
                re_pit_id_nxt = 0;
                re_nseeds_nxt = 0;

                if (gg) begin
                    for (i = 0; i < 6; i = i + 1) begin
                        P0_nxt[i] = 4;
                        P1_nxt[i] = 4; 
                    end
                    P0_nxt[6] = 0;
                    P1_nxt[6] = 0; 
                end

                S_nxt = S_IDLE;
            end
        end
        default: begin
        end
    endcase
end

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        op_ready <= 0;

        re_valid <= 0;
        re_err <= 0;
        re_player_id <= 0;
        re_pit_id <= 0;
        re_nseeds <= 0;
        S <= 0;

        for (i = 0; i < 6; i = i + 1) begin
            P0[i] <= 4;
            P1[i] <= 4; 
        end
        P0[6] <= 0;
        P1[6] <= 0;

        player_id <= 0;
        pit_id    <= 0;
        op        <= 0;
        nseeds    <= 0;

        sowing_player_id <= 0;
        sowing_pit_id <= 0;
        last_sowing_player_id <= 0;
        last_sowing_pit_id <= 0;
    end
    else begin
        op_ready <= op_ready_nxt;

        re_valid <= re_valid_nxt;
        re_err <= re_err_nxt;
        re_player_id <= re_player_id_nxt;
        re_pit_id <= re_pit_id_nxt;
        re_nseeds <= re_nseeds_nxt;
        S <= S_nxt;

        for (i = 0; i < 7; i = i + 1) begin
           P0[i] <= P0_nxt[i];
           P1[i] <= P1_nxt[i];
        end

        player_id <= player_id_nxt;
        pit_id    <= pit_id_nxt;
        op        <= op_nxt;
        nseeds    <= nseeds_nxt;

        sowing_player_id <= sowing_player_id_nxt;
        sowing_pit_id    <= sowing_pit_id_nxt;
        last_sowing_player_id <= last_sowing_player_id_nxt;
        last_sowing_pit_id    <= last_sowing_pit_id_nxt;
    end
end

always @(*) begin
    gg = (& P0_zero) || (& P1_zero);
    player0_score = P0[6] + P1[0] + P1[1] + P1[2] + P1[3] + P1[4] + P1[5];
    player1_score = P1[6] + P0[0] + P0[1] + P0[2] + P0[3] + P0[4] + P0[5];
end

endmodule