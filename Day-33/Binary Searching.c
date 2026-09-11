// Q65. Search in a sorted array using binary search.
#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; 
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the number to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, size, key);
    if (result != -1) {
        printf("Element %d found at 0-based index: %d\n", key, result);
    } else {
        printf("Element %d is not present in the array.\n", key);
    }
    return 0;
}
