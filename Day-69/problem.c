/* Q119. Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. 
Try to find the result in one single iteration. */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the Element%d :- ",i+1);
        scanf("%d",&a[i]);
    }
    int t=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==t){
            printf("Repeated Element :- %d",a[i]);
            break;
        }
        else
        {
            t=a[i];
        }
    }
    return 0;
}
