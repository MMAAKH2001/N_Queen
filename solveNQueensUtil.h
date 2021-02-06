#include<stdio.h>
#include<string.h>
#define N 12
#include <iostream>
#include "isSafe.h"
using namespace std; 
bool solveNQueensUtil(int board[N][N], int col,
    int slashCode[N][N], int backslashCode[N][N],
    bool rowLookup[N],
    bool slashCodeLookup[],
    bool backslashCodeLookup[]);
