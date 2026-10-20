/* Q 118. Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number */
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    int arr[n];
    int actual_sum = 0;
    printf("Enter %d elements (integers from 0 to %d with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);               
        actual_sum = actual_sum + arr[i];                       // Here i am using "SUM" as a weapon.
    }
    int expected_sum = (n * (n + 1)) / 2;
    int missing_number = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}
