// Q23. Write a Program to calculate library fine based on late days as follows:
//      First 5 days late:₹2/day.
//      Next 5 days late :₹4/day.
//      Next 20 days late:₹6/day.
//      More than 30 days :  Membership Cancelled.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of days being Late :- ");
    scanf("%d",&n);
    if(n<=5)
    {
        int f = n*2;
        printf("Total Fine = ₹%d",f);
    }
    else if(n>5 && n<=10)
    {
        int g = n*4 - 10;
        printf("Total Fine = ₹%d",g);
    }
    else if(n>10 && n<=30)
    {
        int h = n*6 - 30;
        printf("Total Fine = ₹%d",h);
    }
    else if(n>30)
    {
        printf("Membership Cancelled");
    }
    return 0;
}
