module bagh_chal (
    input clk,
    input rst_n,

    output reg  op_ready,
    input       op_valid,
    input [4:0] op_i, op_j,

    input             re_ready,
    output reg        re_valid,
    output reg        re_is_finished,
    output reg  [3:0] re_possible_ops,
    output reg [24:0] re_selectable,

    output reg [4:0] o_goats_in_hand,
    output reg [4:0] o_goats_killed
);

localparam S_GCH_OP = 0,
           S_GCH_RE = 1,
           S_GPL_OP = 2,
           S_GMV    = 3,
           S_GCHECK = 4,
           S_GPL_RE = 5,
           S_TCH_OP = 6,
           S_TCH_RE = 7,
           S_TPL_OP = 8,
           S_TMV    = 9,
           S_TPL_RE = 10;

localparam OP_N = 0,
           OP_GCH = 1,
           OP_GRCHPL = 2,
           OP_GPL = 3,
           OP_TCH = 4,
           OP_TRCHPL = 5;
           

localparam GOAT = 0, TIGER = 1;
localparam [24:0] GOAT_MASK = {25{1'b0}};
localparam [24:0] TIGER_MASK = {25{1'b1}};

reg op_ready_nxt;
reg re_valid_nxt;
reg re_is_finished_nxt;
reg [3:0] re_possible_ops_nxt;

reg [3:0] S, S_nxt;

reg [24:0] occupied /* verilator public */;
reg [24:0] occupied_nxt;
reg [24:0] whos /* verilator public */;
reg [24:0] whos_nxt;
reg signed [4:0] ci, ci_nxt;
reg signed [4:0] cj, cj_nxt;
reg signed [4:0] pi, pi_nxt;
reg signed [4:0] pj, pj_nxt;
reg unsigned [4:0] goats_in_hand, goats_in_hand_nxt;
reg unsigned [4:0] goats_killed, goats_killed_nxt;

reg signed [4:0] t0i, t0i_nxt;
reg signed [4:0] t0j, t0j_nxt;
reg signed [4:0] t1i, t1i_nxt;
reg signed [4:0] t1j, t1j_nxt;
reg signed [4:0] t2i, t2i_nxt;
reg signed [4:0] t2j, t2j_nxt;
reg signed [4:0] t3i, t3i_nxt;
reg signed [4:0] t3j, t3j_nxt;

reg [3:0] check_tiger_id, check_tiger_id_nxt;

reg op_fire, re_fire;
reg signed [4:0] i_dist;
reg signed [4:0] j_dist;

reg unsigned [4:0] opij2idx;
reg unsigned [4:0] cij2idx;
reg unsigned [4:0] pij2idx;

reg signed [4:0] su_ci;
reg signed [4:0] su_cj;

wire su_o_tigers_cantmove;
wire [24:0] su_o_update;

selectable_update su (
    .occupied(occupied),
    .whos(whos),
    .S(S),
    .ci(su_ci),
    .cj(su_cj),
    .goats_in_hand(goats_in_hand),

    .o_tigers_cantmove(su_o_tigers_cantmove),
    .o_update(su_o_update)
);

always @(*) begin
    op_fire = op_ready & op_valid;
    re_fire = re_ready & re_valid;

    opij2idx = op_i*5 + op_j;
    cij2idx = ci*5 + cj;
    pij2idx = pi*5 + pj;

    su_ci = ci;
    su_cj = cj;

    op_ready_nxt = op_ready;
    re_valid_nxt = re_valid;
    re_is_finished_nxt = re_is_finished;
    re_possible_ops_nxt = re_possible_ops;

    S_nxt = S;

    occupied_nxt = occupied;
    whos_nxt = whos;
    ci_nxt = ci;
    cj_nxt = cj;
    pi_nxt = pi;
    pj_nxt = pj;
    goats_in_hand_nxt = goats_in_hand;
    goats_killed_nxt = goats_killed;

    t0i_nxt = t0i;
    t1i_nxt = t1i;
    t2i_nxt = t2i;
    t3i_nxt = t3i;
    t0j_nxt = t0j;
    t1j_nxt = t1j;
    t2j_nxt = t2j;
    t3j_nxt = t3j;

    check_tiger_id_nxt = check_tiger_id;

    case (S)
        S_GCH_OP: begin
            if (op_fire) begin  // goat choose a "take" position
                op_ready_nxt = 0;
                re_valid_nxt = 1;
                // the ci, cj are for the position where the current player take a game piece at
                // the pi, pj are for the position where the current player put a game piece to
                // which should be assigned with op_i, op_j here.
                /* which pair of position register's next signal? */= op_i;
                /* which pair of position register's next signal? */= op_j;

                re_is_finished_nxt = 0;

                re_possible_ops_nxt = OP_GRCHPL;
                S_nxt = S_GCH_RE;
            end
        end
        S_GCH_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;

                re_valid_nxt = 0;
                re_is_finished_nxt = 0;

                re_possible_ops_nxt = OP_N;
                S_nxt = S_GPL_OP;
            end
        end
        S_GPL_OP: begin
            if (op_fire) begin
                if (occupied[opij2idx]) begin // goat re-choose a "take" position
                    op_ready_nxt = 0;
                    re_valid_nxt = 1;

                    // the ci, cj are for the position where the current player take a game piece at
                    // the pi, pj are for the position where the current player put a game piece to
                    // which should be assigned with op_i, op_j here.
                    /* which pair of position register's next signal? */= op_i;
                    /* which pair of position register's next signal? */= op_j;

                    re_is_finished_nxt = 0;

                    re_possible_ops_nxt = OP_GRCHPL;
                    S_nxt = S_GCH_RE;
                end
                else begin // goat choose a "put" position
                    op_ready_nxt = 0;
                    // the ci, cj are for the position where the current player take a game piece at
                    // the pi, pj are for the position where the current player put a game piece to
                    // which should be assigned with op_i, op_j here.
                    /* which pair of position register's next signal? */= op_i;
                    /* which pair of position register's next signal? */= op_j;

                    S_nxt = S_GMV;
                end
            end
        end
        S_GMV: begin
            if (goats_in_hand == 0) begin
                occupied_nxt[cij2idx]    = 0;
                whos_nxt    [cij2idx]    = 0;
            end
            else begin
                goats_in_hand_nxt = goats_in_hand - 1;
            end
            occupied_nxt[pij2idx] = 1;
            whos_nxt    [pij2idx] = GOAT;

            re_is_finished_nxt = su_o_tigers_cantmove;
            re_possible_ops_nxt = OP_TCH;
            S_nxt = S_GCHECK;
        end
        S_GCHECK: begin
            case (check_tiger_id)
                3'd0: begin
                    su_ci = t0i;
                    su_cj = t0j;
                end
                3'd1: begin
                    su_ci = t1i;
                    su_cj = t1j;
                end
                3'd2: begin
                    su_ci = t2i;
                    su_cj = t2j;
                end
                3'd3: begin
                    su_ci = t3i;
                    su_cj = t3j;
                end
                default: begin
                end
            endcase
            if (check_tiger_id == 3) begin
                re_valid_nxt       = 1;
                re_is_finished_nxt = su_o_tigers_cantmove;
                check_tiger_id_nxt = 0;
                S_nxt              = S_GPL_RE;
            end
            else begin
                re_valid_nxt       = ~su_o_tigers_cantmove;
                re_is_finished_nxt = 0;
                check_tiger_id_nxt = su_o_tigers_cantmove ? check_tiger_id + 1 : 0;
                S_nxt              = su_o_tigers_cantmove ? S_GCHECK : S_GPL_RE;
            end
        end
        S_GPL_RE: begin
            
            if (re_fire) begin
                op_ready_nxt = 1;

                ci_nxt = 0;
                cj_nxt = 0;
                pi_nxt = 0;
                pj_nxt = 0;

                re_valid_nxt = 0;
                re_is_finished_nxt = 0;

                re_possible_ops_nxt = OP_N;

                if (re_is_finished) begin
                    S_nxt = S_GPL_OP;
                    for (idx = 0; idx < 25; idx = idx + 1) begin
                        if (idx == 0 || idx == 4 || idx == 20 || idx == 24) begin
                            occupied_nxt[idx] = 1;
                            whos_nxt[idx] = TIGER;
                        end
                        else begin
                            occupied_nxt[idx] = 0;
                            whos_nxt[idx] = 0;
                        end
                    end

                    ci_nxt = 0;
                    cj_nxt = 0;
                    pi_nxt = 0;
                    pj_nxt = 0;
                    goats_in_hand_nxt = 20;
                    goats_killed_nxt = 0;

                    t0i_nxt = 0;
                    t0j_nxt = 0;
                    t1i_nxt = 0;
                    t1j_nxt = 4;
                    t2i_nxt = 4;
                    t2j_nxt = 0;
                    t3i_nxt = 4;
                    t3j_nxt = 4;

                    check_tiger_id_nxt = 0;
                end
                else begin
                    S_nxt = S_TCH_OP;
                end
            end
        end
        S_TCH_OP: begin
            if (op_fire) begin // tiger choose a "take" position
                op_ready_nxt = 0;
                re_valid_nxt = 1;

                // the ci, cj are for the position where the current player take a game piece at
                // the pi, pj are for the position where the current player put a game piece to
                // which should be assigned with op_i, op_j here.
                /* which pair of position register's next signal? */= op_i;
                /* which pair of position register's next signal? */= op_j;

                re_is_finished_nxt = 0;

                re_possible_ops_nxt = OP_TRCHPL;
                S_nxt = S_TCH_RE;
            end
        end
        S_TCH_RE: begin
            if (re_fire) begin
                op_ready_nxt = 1;

                re_valid_nxt = 0;
                re_is_finished_nxt = 0;

                re_possible_ops_nxt = OP_N;
                S_nxt = S_TPL_OP;
            end
        end
        S_TPL_OP: begin
            if (op_fire) begin
                if (occupied[opij2idx]) begin // tiger re-choose a "take" position
                    op_ready_nxt = 0;
                    re_valid_nxt = 1;

                    // the ci, cj are for the position where the current player take a game piece at
                    // the pi, pj are for the position where the current player put a game piece to
                    // which should be assigned with op_i, op_j here.
                    /* which pair of position register's next signal? */= op_i;
                    /* which pair of position register's next signal? */= op_j;

                    re_is_finished_nxt = 0;

                    re_possible_ops_nxt = OP_TRCHPL;
                    S_nxt = S_TCH_RE;
                end
                else begin // tiger choose a "put" position
                    op_ready_nxt = 0;

                    // the ci, cj are for the position where the current player take a game piece at
                    // the pi, pj are for the position where the current player put a game piece to
                    // which should be assigned with op_i, op_j here.
                    /* which pair of position register's next signal? */= op_i;
                    /* which pair of position register's next signal? */= op_j;

                    S_nxt = S_TMV;
                end
            end
        end
        S_TMV: begin
            re_valid_nxt = 1;
            occupied_nxt[cij2idx] = 0;
            whos_nxt    [cij2idx] = 0;
            occupied_nxt[pij2idx] = 1;
            whos_nxt    [pij2idx] = TIGER;

            i_dist = pi - ci;
            j_dist = pj - cj;
            if ((~i_dist[0] && pi != ci) || (~j_dist[0] && pj != cj)) begin // true if at least one of i_dist or j_dist are either 2 or -2
                occupied_nxt[(ci + i_dist/2) * 5 + (cj + j_dist/2)] = 0;
                whos_nxt    [(ci + i_dist/2) * 5 + (cj + j_dist/2)] = 0;
                goats_killed_nxt = goats_killed + 1;
            end
            if (goats_killed_nxt == 5) begin
                re_is_finished_nxt = 1;
            end

            if (goats_in_hand == 0) begin
                re_possible_ops_nxt = OP_GCH;
            end
            else begin
                re_possible_ops_nxt = OP_GPL;
            end

            if (ci == t0i && cj == t0j) begin
                t0i_nxt = pi;
                t0j_nxt = pj;
            end
            if (ci == t1i && cj == t1j) begin
                t1i_nxt = pi;
                t1j_nxt = pj;
            end
            if (ci == t2i && cj == t2j) begin
                t2i_nxt = pi;
                t2j_nxt = pj;
            end
            if (ci == t3i && cj == t3j) begin
                t3i_nxt = pi;
                t3j_nxt = pj;
            end

            S_nxt = S_TPL_RE;
        end
        S_TPL_RE: begin
            
            if (re_fire) begin
                op_ready_nxt = 1;

                ci_nxt = 0;
                cj_nxt = 0;
                pi_nxt = 0;
                pj_nxt = 0;

                re_valid_nxt = 0;
                re_is_finished_nxt = 0;
                re_possible_ops_nxt = OP_N;

                if (re_is_finished) begin
                    S_nxt = S_GPL_OP;
                    for (idx = 0; idx < 25; idx = idx + 1) begin
                        if (idx == 0 || idx == 4 || idx == 20 || idx == 24) begin
                            occupied_nxt[idx] = 1;
                            whos_nxt[idx] = TIGER;
                        end
                        else begin
                            occupied_nxt[idx] = 0;
                            whos_nxt[idx] = 0;
                        end
                    end

                    ci_nxt = 0;
                    cj_nxt = 0;
                    pi_nxt = 0;
                    pj_nxt = 0;
                    goats_in_hand_nxt = 20;
                    goats_killed_nxt = 0;

                    t0i_nxt = 0;
                    t0j_nxt = 0;
                    t1i_nxt = 0;
                    t1j_nxt = 4;
                    t2i_nxt = 4;
                    t2j_nxt = 0;
                    t3i_nxt = 4;
                    t3j_nxt = 4;

                    check_tiger_id_nxt = 0;
                end
                else begin
                    if (goats_in_hand == 0) begin
                        S_nxt = S_GCH_OP;
                    end
                    else begin
                        S_nxt = S_GPL_OP;
                    end
                end
            end
        end
        default: begin
        end
    endcase
end

integer idx;

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        op_ready <= 1;
        re_valid <= 0;
        re_is_finished <= 0;
        re_possible_ops <= OP_N;

        S <= S_GPL_OP;

        for (idx = 0; idx < 25; idx = idx + 1) begin
            if (idx == 0 || idx == 4 || idx == 20 || idx == 24) begin
                occupied[idx] <= 1;
                whos[idx] <= TIGER;
            end
            else begin
                occupied[idx] <= 0;
                whos[idx] <= 0;
            end
        end

        ci <= 0;
        cj <= 0;
        pi <= 0;
        pj <= 0;
        goats_in_hand <= 20;
        goats_killed <= 0;
        
        t0i <= 0;
        t0j <= 0;
        t1i <= 0;
        t1j <= 4;
        t2i <= 4;
        t2j <= 0;
        t3i <= 4;
        t3j <= 4;

        check_tiger_id <= 0;
    end
    else begin
        op_ready <= op_ready_nxt;
        re_valid <= re_valid_nxt;
        re_is_finished <= re_is_finished_nxt;
        re_possible_ops <= re_possible_ops_nxt;

        S <= S_nxt;

        occupied <= occupied_nxt;
        whos <= whos_nxt;
        ci <= ci_nxt;
        cj <= cj_nxt;
        pi <= pi_nxt;
        pj <= pj_nxt;
        goats_in_hand <= goats_in_hand_nxt;
        goats_killed <= goats_killed_nxt;

        t0i <= t0i_nxt;
        t0j <= t0j_nxt;
        t1i <= t1i_nxt;
        t1j <= t1j_nxt;
        t2i <= t2i_nxt;
        t2j <= t2j_nxt;
        t3i <= t3i_nxt;
        t3j <= t3j_nxt;

        check_tiger_id <= check_tiger_id_nxt;
    end
end

always @(*) begin
    re_selectable = re_valid ? su_o_update : 0;
    o_goats_in_hand = goats_in_hand;
    o_goats_killed = goats_killed;
end

endmodule

module selectable_update (
    input [24:0] occupied,
    input [24:0] whos,
    input [3:0] S,
    input signed [4:0] ci,
    input signed [4:0] cj,
    input unsigned [4:0] goats_in_hand,

    output reg        o_tigers_cantmove,
    output reg [24:0] o_update
);

localparam S_GCH_OP = 0,
           S_GCH_RE = 1,
           S_GPL_OP = 2,
           S_GMV    = 3,
           S_GCHECK = 4,
           S_GPL_RE = 5,
           S_TCH_OP = 6,
           S_TCH_RE = 7,
           S_TPL_OP = 8,
           S_TMV    = 9,
           S_TPL_RE = 10;

localparam GOAT = 0, TIGER = 1;
localparam [24:0] GOAT_MASK = {25{1'b0}};
localparam [24:0] TIGER_MASK = {25{1'b1}};

reg [24:0] all_vacant;
reg [24:0] all_goat;
reg [24:0] all_tiger;
reg [24:0] cgoat_can_goto;
reg [24:0] ctiger_can_goto;
reg [24:0] ctiger_can_jumpto;

integer idx, jdx;

always @(*) begin
    // all_vacant:  5*5 bit map, if a position i, j is a vacant, the all_vacant[i*5+j] will be true
    // all_goat: 5*5 bit map, if a position i, j is a goat, the all_gaot[i*5+j] will be true
    // all_tiger: 5*5 bit map, if a position i, j is a tiger, the all_tiger[i*5+j] will be true
    all_vacant = /* fill the exprssions here. hint: using bitwise operator to compute ocupied, whos, ... */
    all_goat   = /* fill the exprssions here. hint: using bitwise operator to compute ocupied, whos, ... */
    all_tiger  = /* fill the exprssions here. hint: using bitwise operator to compute ocupied, whos, ... */

    for (idx = 0; idx < 5; idx = idx + 1) begin
        for (jdx = 0; jdx < 5; jdx = jdx + 1) begin
            if (ci == idx && cj == jdx) begin
                cgoat_can_goto[idx * 5 + jdx] = 0;
            end
            else if (
                ((idx - ci == 1 || ci - idx == 1) && cj == jdx) ||
                ((jdx - cj == 1 || cj - jdx == 1) && ci == idx)
            ) begin
                cgoat_can_goto[idx * 5 + jdx] = 1;
            end
            else if (
                (idx - ci == 1 || ci - idx == 1) && (jdx - cj == 1 || cj - jdx == 1) &&
                (idx % 2 == jdx % 2)
            ) begin
                cgoat_can_goto[idx * 5 + jdx] = 1;
            end
            else begin
                cgoat_can_goto[idx * 5 + jdx] = 0;
            end
        end
    end

    for (idx = 0; idx < 5; idx = idx + 1) begin
        for (jdx = 0; jdx < 5; jdx = jdx + 1) begin
            if (ci == idx && cj == jdx) begin
                ctiger_can_goto[idx * 5 + jdx] = 0;
            end
            else if (
                ((idx - ci == 1 || ci - idx == 1) && cj == jdx) ||
                ((jdx - cj == 1 || cj - jdx == 1) && ci == idx)
            ) begin
                ctiger_can_goto[idx * 5 + jdx] = 1;
            end
            else if (
                (idx - ci == 1 || ci - idx == 1) && (jdx - cj == 1 || cj - jdx == 1) &&
                (idx % 2 == jdx % 2)
            ) begin
                ctiger_can_goto[idx * 5 + jdx] = 1;
            end
            else begin
                ctiger_can_goto[idx * 5 + jdx] = 0;
            end
        end
    end

    for (idx = 0; idx < 5; idx = idx + 1) begin
        for (jdx = 0; jdx < 5; jdx = jdx + 1) begin
            if (ci == idx && cj == jdx) begin
                ctiger_can_jumpto[idx * 5 + jdx] = 0;
            end
            else if (
                (
                    ((idx - ci == 2 || ci - idx == 2) && cj == jdx) ||
                    ((jdx - cj == 2 || cj - jdx == 2) && ci == idx)
                ) &&
                (all_goat[ (ci + (idx - ci)/2) * 5 + (cj + (jdx - cj)/2) ])
            ) begin
                ctiger_can_jumpto[idx * 5 + jdx] = 1;
            end
            else if (
                (idx - ci == 2 || ci - idx == 2) && (jdx - cj == 2 || cj - jdx == 2) && 
                (idx % 2 == jdx % 2) &&
                (all_goat[ (ci + (idx - ci)/2) * 5 + (cj + (jdx - cj)/2) ])
            ) begin
                ctiger_can_jumpto[idx * 5 + jdx] = 1;
            end
            else begin
                ctiger_can_jumpto[idx * 5 + jdx] = 0;
            end
        end
    end
    
    o_tigers_cantmove = ~| ((ctiger_can_goto | ctiger_can_jumpto) & all_vacant);

    case (S)
        S_GCH_RE: begin
            o_update = all_goat | (cgoat_can_goto & all_vacant);
        end
        S_GPL_RE: begin
            o_update = all_tiger;
        end
        S_TCH_RE: begin
            o_update = all_tiger | ((ctiger_can_goto | ctiger_can_jumpto) & all_vacant);
        end
        S_TPL_RE: begin
            if (goats_in_hand > 0) begin
                o_update = all_vacant;
            end
            else begin
                o_update = all_goat;
            end
        end
        default: begin
            o_update = 0;
        end
    endcase
end
    
endmodule