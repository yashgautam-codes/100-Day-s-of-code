/* Q117. Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. 
Print the merged array. */
#include <stdio.h>
int main() {
    int m, n;
    int i = 0, j = 0, k = 0;
    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    printf("Enter size of second array (n): ");
    scanf("%d", &n);
    int arr1[m], arr2[n], merged[m + n];
    printf("Enter %d sorted elements for first array: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d sorted elements for second array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    i = 0; 
    j = 0; 
    k = 0; 
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
