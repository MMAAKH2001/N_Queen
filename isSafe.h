#include<stdio.h>
#include<string.h>
#define N 12
#include <iostream>
using namespace std;
bool isSafe(int row, int col, int slashCode[N][N],
    int backslashCode[N][N], bool rowLookup[],
    bool slashCodeLookup[], bool backslashCodeLookup[]);
