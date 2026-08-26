// Q25. Write a program to implement a absic Calculator using switch-case for +,-,*,/,%.
#include <stdio.h>
int main()
{
    printf(" 1 = Addition");
    printf("\n 2 = Substraction");
    printf("\n 3 = Multiplication");
    printf("\n 4 = Quotient");
    printf("\n 5 = Remainder");
    int a;
    printf("\nEnter 1st Number :- ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number :- ");
    scanf("%d",&b);
    int n;
    printf("Enter any Number for the Arithematic Operation (1-5) :- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("%d",(a+b));
        break;
        case 2:
        printf("%d",(a-b));
            break;
        case 3:
        printf("%d",a*b);
        break;
        case 4: 
        printf("%d",a/b);
        break; 
        case 5:
        printf("%d",a%b);
        break;
    }
    return 0;
}
