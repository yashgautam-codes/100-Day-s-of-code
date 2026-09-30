#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS] = {0}; 
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Invalid input or dimensions exceed maximum size.\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0;
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum; 
    }
    printf("\nRow sums stored in the array:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSums[i]);
    }
    return 0;
}
