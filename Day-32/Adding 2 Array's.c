// Q63. Merge two arrays.
#include <stdio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i, j;
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArr[i + j] = arr2[j];
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    int mergedArr[size3];
    printf("Array 1: ");
    printArray(arr1, size1);
    printf("Array 2: ");
    printArray(arr2, size2);
    mergeArrays(arr1, size1, arr2, size2, mergedArr);
    printf("Merged Array: ");
    printArray(mergedArr, size3);
    return 0;
}
