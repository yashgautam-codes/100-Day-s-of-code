// Q16. Write a program to input three number's and find the largest among them using if-else.
#include <stdio.h>
int main()
{
    int n1;
    printf("Enter 1st Number:- ");
    scanf("%d",&n1);
    int n2;
    printf("Enter 2nd Number:- ");
    scanf("%d",&n2);
    int n3;
    printf("Enter 3rd Number:- ");
    scanf("%d",&n3);
        if(n1>n2 && n1>n3)
        {
            printf("%d is the largest number",n1);
        }
        if(n2>n3 && n2>n1)
        {
            printf("%d is the largest number",n2);
        }
        if(n3>n1 && n3>n2)
        {
            printf("%d is the largest number",n3);
        }
        else
        {
            printf("All are Equal");
        }
    return 0;
}
