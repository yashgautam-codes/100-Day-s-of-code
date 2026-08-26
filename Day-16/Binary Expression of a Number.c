// Q31. Write a program to take a number as input and print its equivalent binary expresion.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    int q;
    int rn =0;
    int place;
    while(n>0)
    {
        q = n%2;
        rn = rn + q*place;
        place = place*10;
        n=n/2;
    }
    printf("%d",rn);
    return 0;
}
