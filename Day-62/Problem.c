/* Q112. Write a program to take an integer array arr as input. 
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.*/
#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<=3;i++)
    {
        printf("Enter Element %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    int max_so_far = a[0];    //Kadane's Alogorithm's format --> IMPORTANT
    int max_ending_here = a[0];
    for (int i = 1; i < 4; i++)
     {
        if (a[i] > max_ending_here + a[i]) {
            max_ending_here = a[i];
        } else {
            max_ending_here = max_ending_here + a[i];
        }
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }
    printf("The maximum sum of a contiguous subarray is: %d\n", max_so_far);
    return 0;
}
