Time Complexity
    Worst Case : O(9^E) where E is the number of empty cells (<= 81).
        At each empty cell you try up to 9 digits.
    Valid check per attempt: O(9) (scan 9 is row, 9 in column, 9 in box but combined in one loop of 9 iterations).
    Effective runtime : much faster in practice due to pruning from isValid, but still exponential in the worst case.

Space Complexity
    Call stack (recursion): O(E) depth (<= 81).
        Each frame hols a few locals -> a few KB total on typical systems.
    Board storage: In-place; no extra grid -> O(1) auxiliary space beyond the call stack.

Notes
    Stops on the fist valid solution.
    Adding heuristics (choose cell with fewest candidates) can reduce the branching factor significantly.
