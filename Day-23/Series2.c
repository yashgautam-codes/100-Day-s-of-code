// Q 45. Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    double numerator = 2.0;
    double denominator = 3.0;
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2.0;      
        denominator += 4.0;    
    }
    printf("The sum of the series up to %d terms is: %.6lf\n", n, sum);
    return 0;
}
