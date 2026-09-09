// Q59. Count even and odd numbers in an array.
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
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    int cp=0;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]%2!=0)
        {
            cp++;
        }
    }
    printf("Even Number's :- %d",c);
     printf("\nOdd Number's :- %d",cp);
    return 0;
}
