// Q54. Write a program to print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#include <stdio.h>
#include <stdlib.h> 
int main() {
    int max_stars = 7;
    int total_rows = 7;
    for (int i = -3; i <= 3; i++) {
        int stars = max_stars - 2 * abs(i);
        int spaces = abs(i);
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int k = 0; k < stars; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
