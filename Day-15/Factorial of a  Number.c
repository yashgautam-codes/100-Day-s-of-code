// Q29. Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    int p=1;
    printf("Enter any number:- ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        p=p*i;
    }
    printf("Factorial of %d = %d",n,p);
    return 0;
}
