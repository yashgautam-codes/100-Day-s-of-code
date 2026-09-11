// Q64. Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <stdlib.h> 
int findMostFrequentDigit(long long num) {
    int frequency[10] = {0}; 
    if (num == 0) {
        return 0;
    }
    num = llabs(num);
    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    int maxDigit = 0;
    int maxCount = frequency[0];
    for (int i = 1; i < 10; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            maxDigit = i;
        }
    }
    return maxDigit;
}
int main() {
    long long num;
    printf("Enter an integer number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int result = findMostFrequentDigit(num);
    printf("The digit that occurs the most times is: %d\n", result);
    return 0;
}
