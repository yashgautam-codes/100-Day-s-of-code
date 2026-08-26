// Q6. Write a program to swap two number's using a third variable.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter First Number 'a' :- ");
    scanf("%d",&a);
    int b;
    printf("Enter Second Number 'b' :- ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("New value of a = %d",a);
     printf("\nNew value of b = %d",b);
    return 0;
}
