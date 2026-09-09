// Q57.Find the sum of array elements.
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
    int sum=0;
    for(int i=0;i<=n-1;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of all the elements of the entered array :- %d",sum);
  return 0;
}
