// Q34. Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }
    if(a==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}
