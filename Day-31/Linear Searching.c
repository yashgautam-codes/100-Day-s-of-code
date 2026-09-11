// Q61. Search for an element in an array using linear search.
#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
int main() {
    int n, key, result;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element %d found at 0-based index: %d\n", key, result);
    } else {
        printf("Element %d is not present in the array.\n", key);
    }
    return 0;
}
