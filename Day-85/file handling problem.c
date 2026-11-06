/* Q135. Assign explicit values starting from 10 and print them.*/
#include <stdio.h>
int main() 
{
    int numbers[5] = {10, 11, 12, 13, 14};
    for (int i = 0; i < 5; i++) {
        printf("Value at index %d is: %d\n", i, numbers[i]);
    }
    return 0;
}
