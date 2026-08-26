// Q8. Write  a program to find & display sum of first 'N' natural number's. 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number 'N' till which sum need's to be printed :- ");
    scanf("%d",&n);
    int q = n*(n+1)/2;   //sum of first 'N' natural number's
    printf("Sum of the first 'N' natural number's :- %d",q);
    return 0;
}
