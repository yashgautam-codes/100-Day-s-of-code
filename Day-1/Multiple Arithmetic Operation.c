// Q2. Write a program to input 2 number's & display their Sum, Difference, Product & Quotient.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number :- ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :- ");
    scanf("%d",&b);
    int A = a+b;   // A -> Addition
    int S = a-b;   // S -> Substraction
    int M = a*b;   // M -> Multiplication
    float Q = a/b;  // D -> Quotient
    printf ("Addition of the entered number's = %d",A);
    printf ("\nSubstraction of the entered number's = %d",S);
    printf ("\nMultiplication of the entered number's = %d",M);
    if(b!=0)
    {
    printf ("\nQuotient of the entered number's = %f",Q);
    }
    else
    printf ("\nIn a/b , Denominator cannot be = 0  ");
    return 0;
}
