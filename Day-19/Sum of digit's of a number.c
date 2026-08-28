// Q38. Write a Program to find the sum of digits of a Number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    int sum=0;
    int q;
    while(n>0)
    {
      q =n%10;
      sum = sum+q;
      n=n/10;  
    }
    printf("Sum of digit's of entered Number :- %d",sum);
    return 0;
}
