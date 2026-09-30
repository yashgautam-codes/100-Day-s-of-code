#include <stdio.h>
#include <stdbool.h>
#define SIZE 4 // You can change the size of the matrix here
bool areDiagonalElementsDistinct(int matrix[SIZE][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; 
            }
        }
    }
    return true; 
}
int main() {
    int matrix[SIZE][SIZE] = {
        {1,  5,  9,  3},
        {4,  2,  8,  6},
        {7,  5,  3,  1},
        {2,  4,  6,  7}
    };
    if (areDiagonalElementsDistinct(matrix, SIZE)) {
        printf("The elements on the diagonal are distinct.\n");
    } else {
        printf("The elements on the diagonal are NOT distinct.\n");
    }
    return 0;
}
