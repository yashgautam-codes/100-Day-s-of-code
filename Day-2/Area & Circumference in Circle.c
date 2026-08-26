// Q4. Write a program to print Area & Circumference of the circle given it's radius. 
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the value of Radius :- ");
    scanf("%d",&r);
    float pie = 3.1415;
    float a = pie*r*r;
    float c = 2*pie*r;
    printf("Area of the Circle with raius %d = %f",r,a);
    printf("\nCircumference of the Circle with raius %d = %f",r,c);
    return 0;
}
