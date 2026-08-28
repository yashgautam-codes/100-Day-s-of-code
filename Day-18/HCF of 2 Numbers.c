// Q36. Write a program to find the HCF(GCD) of two Numbers.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st Number (a<b) :- ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number :- ");
    scanf("%d",&b); 
    int q;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
         q=i;
        }
    }
    printf("%d",q);
    return 0;
}
