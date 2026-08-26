// Q33. Write a program to check if a number is an Armstrong.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    int m=n;
    int ans=0;
    while(n>0)
    {
        int q = n%10;
        ans = ans + q*q*q;
        n=n/10;
    }
    if(m==ans)
    {
        printf("ARMSTRONG Number!");
    }
    else
    {
        printf("Not an ARMSTRONG Number!");
    }
    printf("\n%d",ans);
    return 0;
}
