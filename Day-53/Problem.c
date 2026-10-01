/*Q103. Write a Program to take an array of integers as input, calculate the pivot index of this array.
  The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
  If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
  This also applies to the right edge of the array. 
  Print the leftmost pivot index. 
  If no such index exists, print -1.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array :- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the Element%d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        int j;
        int sum1=0;
        int sum2=0;
        for( j=0;j<i;j++)
        {
            sum1 = sum1 + a[j];
        }

        for(int k=j+1;k<=n-1;k++)
        {
            sum2 = sum2 + a[k];
        }

        if(sum1==sum2)
        {
            printf("%d",i);
            return 0 ;
        }
    }
    printf("-1");
    return 0;
}
