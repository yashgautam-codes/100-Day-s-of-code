// Q66. Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int insertInSorted(int arr[], int size, int capacity, int key) {
    if (size >= capacity) {
        printf("Error: Array is full. Cannot insert.\n");
        return size;
    }
    int i = size - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = key;
    return size + 1;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int capacity = 10;
    int size = 5;
    int arr[10] = {12, 16, 20, 40, 56}; 
    int key;
    printf("Original sorted array: ");
    printArray(arr, size);
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    size = insertInSorted(arr, size, capacity, key);
    printf("Array after insertion:  ");
    printArray(arr, size);
    return 0;
}
