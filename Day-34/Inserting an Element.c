// Q67. Insert an element in an array at a given position.
#include <stdio.h>
#define MAX_CAPACITY 100 
int main() {
    int arr[MAX_CAPACITY] = {10, 20, 30, 40, 50}; 
    int size = 5;   
    int element = 25; 
    int position = 2;     
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (size >= MAX_CAPACITY) {
        printf("Error: Array is full. Cannot insert element.\n");
        return 1;
    }
    if (position < 0 || position > size) {
        printf("Error: Invalid position.\n");
        return 1;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
