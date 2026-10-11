/* Q109. Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.*/
#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<=3;i++)
    {
        printf("Enter Element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter k :- ");
    scanf("%d",&k);
    if(k<1||k>4){
        printf("Invalid 'k'");
        return 0;
    }
    int max = 0;
    for(int i=0;i<=k-1;i++)
    {
        max = max + a[i];
    }
    for(int i=0;i<=4-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum = sum + a[j];
        }
        if(sum>max)
        {
            max = sum;
        }
    }
    printf("Maximum Sum = %d",max);
    return 0;
}
