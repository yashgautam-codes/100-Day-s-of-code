// Q19. Write a program to classify a triangle as Equliteral Traingle, Isoceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter side1 :- ");
    scanf("%d",&a);
    int b;
    printf("Enter side1 :- ");
    scanf("%d",&b);
    int c;
    printf("Enter side1 :- ");
    scanf("%d",&c);
    if(a==b & b==c)
    {
        printf("Equilateral Triangle");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}
