// Q17.Write a program to find the roots of a quadratic quation and categorize them.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter 'a' :- ");
    scanf("%d",&a);
    int b;
    printf("Enter 'b' :- ");
    scanf("%d",&b);
    int c;
    printf("Enter 'c' :- ");
    scanf("%d",&c);
    int D = (((b*b)-4*a*c));
    if(D>0)
    {
        printf("Root's are Real & Different: %d,%d",a,c);
    }
    if(D==0)
    {
        printf("Root's are Equal: %d",a);
    }
    if(D<0)
    {
        printf("Root's are Complex");
    }
    return 0;
}
