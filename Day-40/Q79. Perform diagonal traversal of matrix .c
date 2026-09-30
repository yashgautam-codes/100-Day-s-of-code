#include <stdio.h>
#define ROWS 3
#define COLS 4
void diagonalTraversal(int mat[ROWS][COLS], int r, int c) {
    int totalDiagonals = r + c - 1;
    printf("Diagonal Traversal: ");
    for (int k = 0; k < totalDiagonals; k++) {
        int start_row = (k < c) ? 0 : k - c + 1;
        int start_col = (k < c) ? k : c - 1;
        int i = start_row;
        int j = start_col;        
        while (i < r && j >= 0) {
            printf("%d ", mat[i][j]);
            i++; 
            j--; 
        }
    }
    printf("\n");
}

int main() {
    int mat[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    diagonalTraversal(mat, ROWS, COLS);
    return 0;
}
