#include <stdio.h>
#define MAX 10
int isSymmetric(int mat[MAX][MAX], int rows, int cols) {
    if (rows != cols) {
        return 0; 
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}
int main() {
    int mat[MAX][MAX];
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    if (isSymmetric(mat, rows, cols)) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }
    return 0;
}
