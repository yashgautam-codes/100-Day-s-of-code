// Q60. Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size of an Array :- ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter Element %d :- ",i+1);
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]>0)
        {
            c++;
        }
    }
    int cp=0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]<0)
        {
            cp++;
        }
    }
    int cpp=0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]=0)
        {
            cpp++;
        }
    }
    printf("Positive Number's :- %d",c);
     printf("\nNegative Number's :- %d",cp);
     printf("\nZero Number's :- %d",cpp);
    return 0;
}
