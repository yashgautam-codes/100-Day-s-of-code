// Q26. Write a program to print Number's from 1 to N.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of 'N' :- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
