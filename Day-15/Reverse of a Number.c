// Q30. Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    int ld=0;
    while(n>0)
    {
        ld=n%10;
        printf("%d",ld);
        n=n/10;
    }
    return 0;
}
//                  OR
//#include <stdio.h>
//int main()
//{
//    int n;
//    printf("Enter any number:- ");
//    scanf("%d",&n);
//    int ld=0;
//    int reverse =0;
//    while(n>0)
//    {
//        ld=n%10;
//        reverse = ld + reverse*10;
//        n=n/10;
//    }
//      printf("%d",reverse);
//    return 0;
//}
