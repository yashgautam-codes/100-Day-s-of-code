// Q24. Write a program to calculate electricity bill based on units consumed with these rates:
//      First 100 Units at ₹5/unit
//      Next 100 Units at ₹7/unit
//      Next 100 Units at ₹10/unit
//      Above at ₹12/unit.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Units :- ");
    scanf("%d",&n);
    if(n<=100)
    {
        int f = n*5;
        printf("Total Fine = ₹%d",f);
    }
    else if(n>100 && n<=200)
    {
        int g = (n-100)*7 + 500;
        printf("Total Fine = ₹%d",g);
    }
    else if(n>200 && n<=300)
    {
        int h = (n-200)*10 + 1200;
        printf("Total Fine = ₹%d",h);
    }
    else if(n>300)
    {
        int i = (n-300)*12 + 2200;
        printf("Total Fine = ₹%d",i);
    }
    return 0;
}
