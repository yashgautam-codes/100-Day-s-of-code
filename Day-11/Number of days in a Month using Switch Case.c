// Q21. Write a program to display the month name and number of day's using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int m;
    printf("Enter any Year :- ");
    scanf("%d",&m);
    int n;
    printf("Enter Month Number (1-12) :- ");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
    printf("January");
    printf("\n31 Day's");
    break;
    case 2 :
    printf("February");
    if(m%4==0)
    {
    printf("\n29 Day's");
    }
    else
    {
        printf("\n28 Day's");
    }
    break;
    case 3 :
    printf("March");
printf("\n31 Day's");
    break;
    case 4 :
    printf("April");
    printf("\n30 Day's");
    break;
    case 5 :
    printf("May");
    printf("\n31 Day's");
    break;
    case 6 :
    printf("June");
    printf("\n30 Day's");
    break;
    case 7 :
    printf("July");
    printf("\n31 Day's");
    break;
    case 8 :
    printf("August");
    printf("\n31 Day's");
    break;
    case 9 :
    printf("September");
    printf("\n30 Day's");
    break;
    case 10 :
    printf("October");
    printf("\n31 Day's");
    break;
    case 11 :
    printf("November");
    printf("\n30 Day's");
    break;
    case 12 :
    printf("December");
    printf("\n31 Day's");
    break;
    }
    return 0;
}
