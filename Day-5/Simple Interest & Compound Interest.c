// Q9. Write a program t calculate simple and compound intrest for given principal,rate,&time.
#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    printf("Enter the Principal Amount :- ");
    scanf("%d",&p);
    int r;
    printf("Enter the Rate(in percentage) :- ");
    scanf("%d",&r);
    int t;
    printf("Enter the Time(in Year's) :- ");
    scanf("%d",&t);
    int n=1;    // intrest compounded only once in a year.
    int q = (p*r*t)/100;
    double r1 = r/100.0;
    double amount = p * pow((1+r1/n),(n*t));
    float intrest = amount - p;
    printf("Simple Intrest :- %d",q);
    printf("\nCompound Intrest :- %f",intrest);
    return 0;
}
