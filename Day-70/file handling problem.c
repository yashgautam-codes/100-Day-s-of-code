/* Q 120. Write a program to take a string input. Change it to sentence case. */
#include <stdio.h>
int main() {
    char str;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) {
        i++;
    }
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32; 
    }
    if (str[i] != '\0') {
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
        i++;
    }
    printf("Sentence case: %s", str);
    return 0;
}
