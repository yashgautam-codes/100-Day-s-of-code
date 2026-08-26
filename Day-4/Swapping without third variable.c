// Q7. Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number 'A' :- ");
    scanf("%d",&a);
    int b;
    printf("Enter the first number 'B'(B<A) :- ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("New value of 'A' :- %d",a);
    printf("\nNew value of 'B' :- %d",b);
    return 0;
}
