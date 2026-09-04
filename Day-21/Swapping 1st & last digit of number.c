// Q41. Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, firstDigit, lastDigit, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    swappedNum = lastDigit * (int)pow(10, digits); 
    swappedNum += num % (int)pow(10, digits);     
    swappedNum -= lastDigit;                       
    swappedNum += firstDigit;                      
    printf("Output: %d\n", swappedNum);
    return 0;
}
