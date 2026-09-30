#include <stdio.h>
int main() {
    char str[100];
    char target;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &target);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    printf("The character '%c' appears %d times.\n", target, count);
    return 0;
}
