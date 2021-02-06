#include"solveNQueensUtil.h"

bool solveNQueensUtil(int board[N][N], int col,
    int slashCode[N][N], int backslashCode[N][N],
    bool rowLookup[N],
    bool slashCodeLookup[],
    bool backslashCodeLookup[])
{
    /* base case: If all queens are placed
    then return true */
    if (col >= N)
        return true;

    /* Consider this column and try placing
       this queen in all rows one by one */
    for (int i = 0; i < N; i++)
    {
        /* Check if queen can be placed on
           board[i][col] */
        if (isSafe(i, col, slashCode,
            backslashCode, rowLookup,
            slashCodeLookup, backslashCodeLookup))
        {
            /* Place this queen in board[i][col] */
            board[i][col] = 1;
            rowLookup[i] = true;
            slashCodeLookup[slashCode[i][col]] = true;
            backslashCodeLookup[backslashCode[i][col]] = true;

            /* recur to place rest of the queens */
            if (solveNQueensUtil(board, col + 1,
                slashCode, backslashCode,
                rowLookup, slashCodeLookup, backslashCodeLookup))
                return true;

            /* If placing queen in board[i][col]
            doesn't lead to a solution, then backtrack */

            /* Remove queen from board[i][col] */
            board[i][col] = 0;
            rowLookup[i] = false;
            slashCodeLookup[slashCode[i][col]] = false;
            backslashCodeLookup[backslashCode[i][col]] = false;
        }
    }

    /* If queen can not be place in any row in
        this colum col then return false */
    return false;
}
