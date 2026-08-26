// Q13. Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Year:- ");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("LEAP YEAR!");
    }
    else
    {
        printf("NOT A LEAP YEAR");
    }
    return 0;
}
