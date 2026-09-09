// Q55. Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
       int a=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                a=0;
                break;
            }
        }
        if(a==1)
        {
             printf("\n %d",i);
        }
    }
}
