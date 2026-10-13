/* Q111. Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. 
Print the results separated by spaces as output.*/
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
    printf("Enter Value of 'K' :- ");
    scanf("%d",&k);
    int n=a[0];
    for(int i=0;i<=k-1;i++)
    {
        if(n<0)
        {
            printf("First Negative Integer :- %d",a[i]);
            break;
        }
        else
        {
            n=a[i+1];   
        }
    }
    return 0;
}
