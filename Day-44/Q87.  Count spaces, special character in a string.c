#include <stdio.h>
int main() {
    char str[200];
    int spaces = 0, digits = 0, specialChars = 0, alphabets = 0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] != '\n') { 
            specialChars++;
        }
        i++;
    }
    printf("\n--- Results ---\n");
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Alphabets: %d\n", alphabets);
    printf("Special Characters: %d\n", specialChars);
    return 0;
}
