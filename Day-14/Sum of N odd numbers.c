// Q27. Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i=i+2)
    {
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
