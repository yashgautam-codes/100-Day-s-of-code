/* Q107. Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array.
 Previous greater element of an element in the array is the nearest element on the left which is greater than the current element.
 If there does not exist next greater of current element, then previous greater element for current element is -1.*/
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
        int m=-1;
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>a[i])
            {
               m=a[j];
                break;
            }
        }
         printf("%d",m);
            if(i<3)
            {
                printf(", ");
            }
    }
    return 0;
}
