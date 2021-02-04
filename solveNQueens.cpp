#include "solveNQueens.h"

bool solveNQueens()
{
    int board[N][N];
    memset(board, 0, sizeof board);

    // helper matrices
    int slashCode[N][N];
    int backslashCode[N][N];

    // arrays to tell us which rows are occupied
    bool rowLookup[N] = { false };

    //keep two arrays to tell us 
    // which diagonals are occupied
    bool slashCodeLookup[2 * N - 1] = { false };
    bool backslashCodeLookup[2 * N - 1] = { false };

    // initialize helper matrices
    for (int r = 0; r < N; r++)
        for (int c = 0; c < N; c++) {
            slashCode[r][c] = r + c,
                backslashCode[r][c] = r - c + 7;
        }

    if (solveNQueensUtil(board, 0,
        slashCode, backslashCode,
        rowLookup, slashCodeLookup, backslashCodeLookup) ==
        false)
    {
        printf("Solution does not exist");
        return false;
    }

    // solution found
    printSolution(board);
    return true;
}
