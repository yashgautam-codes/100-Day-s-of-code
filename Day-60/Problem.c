/* Q110. Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of element's in Array :- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter Element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter value of k :- ");
    scanf("%d",&k);
    if(k<1||k>n)
    {
        printf("Invalid Value of 'K'");
        return 0;
    }
     int max=0;
        for(int j=0;j<=k-1;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
            printf("%d ",max);
        }
    return 0;
}
