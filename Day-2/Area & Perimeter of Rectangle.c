// Q3. Write a program to print Area & Perimeter of Rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float l,b,area,perimeter ;
    printf("Enter the length of Rectangle :- ");
    scanf("%f",&l);
    printf("Enter the breadth of Rectangle :- ");
    scanf("%f",&b);
    perimeter = 2*(l+b);
    area = l*b;
    printf("Perimeter of the given Rectangle = %f",perimeter);
    printf("\nArea of the given Rectangle = %f",area);
    return 0;
}
