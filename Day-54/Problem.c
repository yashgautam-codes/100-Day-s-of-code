/*Q104.  Write a Program to take a positive integer n as input, 
and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1. 
Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number:- ");
    scanf("%d",&n);
    int x;
    for(int x=1;x<=n;x++)
    {
        int sum1 = 0;
        for(int i=1;i<=x;i++)
            {
                sum1 = sum1 + i;
            }
        int sum2=0;
        for(int k=x;k<=n;k++)
            {
                sum2 = sum2 + k;
            }
            if(sum1==sum2)
            {
                printf("Pivot Point :- %d",x);
            }
    }
    return 0;
}
