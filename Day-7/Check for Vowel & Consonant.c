// Q14. Write a program to input a character and check whether it is a vowel or consonent using if-else.
#include <stdio.h>
int main()
{
    char n;      // Character should not be capital.
    printf("Enter Any Character:- ");
    scanf("%c",&n);
    if( n =='a' || n =='e' || n =='i' || n =='o' || n =='u')
    {
        printf("Vowel!");
    }
    else
    {
        printf("Consonent!");
    }
    return 0;
}
