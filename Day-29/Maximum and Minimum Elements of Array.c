// Q58. Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of Array:- ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<=n-1;i++)
    {
      printf("Enter Element %d :- ",i+1);
      scanf("%d",&arr[i]);
    }
    int maximum = arr[0];
    for(int i=0;i<=n-1;i++)
    {
        if(maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    printf("Maximum Value = %d",maximum);
  return 0;
}
