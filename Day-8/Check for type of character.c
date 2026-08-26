// Q15. Write a program to input a character and check whether it is an uppercase alphabet, loweercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:- ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("LOWER CASE");
    }
    if(ch>='A' && ch<='Z')
    {
        printf("UPPER CASE");
    }
    if(ch>='0' && ch<='9')
    {
        printf("DIGIT'S");
    }
    else
    {
        printf("SPECIAL CHARACTER");
    }
    return 0;
}
