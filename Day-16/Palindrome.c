// Q32. Write a program to check if a number is a Palindrome. 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);
    int m;
    printf("Enter number of digits :- ");
    scanf("%d",&m);
    int o=n;
    int rn=0;
    for(int i=1;i<=m;i++)
    {
        int q = n%10;
        rn = rn*10 + q;
        n=n/10;
    }
    if(rn==o)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a Palindrome!");
    }
    return 0;
}
