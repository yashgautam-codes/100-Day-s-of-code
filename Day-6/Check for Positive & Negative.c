// Q12. Write a program to input an integer and check whether it is positive,negative or zero using nested if-else.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("POSITIVE NUMBER");
    }
    else
    {
        if(n==0)
        {
            printf("Zero");
        }
        else
        {
            printf("NEGATIVE NUMBER");
        }
    }
    return 0;
}
