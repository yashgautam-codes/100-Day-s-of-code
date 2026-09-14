// Q72. Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int rows, cols;
    int sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; 
        }
    }
    printf("\nSum of all elements in the matrix = %d\n", sum);
    return 0;
}
