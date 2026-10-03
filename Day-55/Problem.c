/*Q 105. Write a program to take an integer array nums of size n, and print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
Print -1 if no such element exists. 
Note: Majority Element is not necessarily the element that is present most number of times.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter Element%d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        int x = a[i];
        int count=1;

        for(int j=i+1;j<=n-1;j++)
        {
            if(a[j]==x)
            {
                count++;
            }
        }
        if(count>(n/2))
    {
        printf("Majority Element :- %d",a[i]);
        return 0;
    }
    }
    printf("-1");
}
