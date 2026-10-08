/*Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. 
Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
If there does not exist next greater of current element, then next greater element for current element is -1. */
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
        int min=-1;
        for(int k=i+1;k<=3;k++)
        {
            if(a[i]<a[k])
            {
                min=a[k];
                break;
            }
        }
        printf("%d",min);
        if(i<3)
        {
            printf(", ");
        }
    }
    return 0;
}
