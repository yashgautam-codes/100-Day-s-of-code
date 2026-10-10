/* Q108. Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<=3;i++)
    {
        printf("Enter Element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=3;i++)
    {
        int m = 1;
        for(int j=0;j<=3;j++)
        {
            if(i!=j)
            {
                m = m * a[j];
            }
        }
        printf("%d ",m);
    }
    return 0;
}
