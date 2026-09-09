// Q56. Read and print elements of a one-dimensional array.
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
  for(int i=0;i<=n-1;i++)
    {
        printf("\nElement %d = %d",i+1,arr[i]);
    }
  return 0;
}
