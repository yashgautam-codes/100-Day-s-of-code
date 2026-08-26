// Q1.Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter first number 'X' :- ");
    scanf("%d",&x);
    int y;
    printf("Enter second number 'Y' :- ");
    scanf("%d",&y);
    int sum = x+y;
    printf("Sum of 'X'&'Y' = %d",sum);
    return 0;
}
