// Q40. Write a program to find 1's component of binary number and print it.
#include <stdio.h>
#include <string.h>
int main() {
    char binary[100];
    
    printf("Enter any Binary Number :- ");
    scanf("%s", binary);
    printf("Complement: ");
    for (int i = 0; binary[i] != '\0'; i++) 
    {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary digit detected: %c\n", binary[i]);
            return 1; 
        }
    }
  printf("\n");
  return 0;
}  
