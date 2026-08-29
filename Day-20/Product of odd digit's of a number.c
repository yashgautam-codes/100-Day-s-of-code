// Q39. Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);
    int product = 1;
    while(n>0)
    {
        int q = n%10;
        if(q%2!=0)
        {
            product = product * q;
        }
        n=n/10;
    }
    printf("Product of odd digits :- %d",product);
    return 0;
}
