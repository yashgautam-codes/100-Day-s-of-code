//Q101. Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
//The elements in the sorted array might be repeated. 
// You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
//Print -1, -1 if the target is not present.
#include <stdio.h>
int findFirstOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            result = mid;     
            end = mid - 1;    
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}
int findLastOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            result = mid;     
            start = mid + 1;  
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}
int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements (duplicates allowed):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);
    printf("First occurrence: %d, Last occurrence: %d\n", first, last);
    return 0;
}
