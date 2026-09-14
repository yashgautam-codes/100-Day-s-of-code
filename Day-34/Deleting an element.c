// Q68. Delete an element from an array.
#include <stdio.h>
int main() {
    int array[100], position, i, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the position where you wish to delete an element (1 to %d): ", n);
    scanf("%d", &position);
    if (position < 1 || position > n) {
        printf("Deletion not possible. Invalid position.\n");
    } else {
        for (i = position - 1; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--;
        printf("Resultant array is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}
