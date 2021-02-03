#include "nQueens"
void nQueens(int k, int n){

    for (int i = 1;i <= n;i++){
        if (canPlace(k, i)){
            arr[k] = i;
            if (k == n)
                display(n);
            else
                nQueens(k + 1, n);
        }
    }
}
