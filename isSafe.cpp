#include "isSafe.h"
bool isSafe(int row, int col, int slashCode[N][N],
    int backslashCode[N][N], bool rowLookup[],
    bool slashCodeLookup[], bool backslashCodeLookup[])
{
    if (slashCodeLookup[slashCode[row][col]] ||
        backslashCodeLookup[backslashCode[row][col]] ||
        rowLookup[row])
        return false;

    return true;
}
