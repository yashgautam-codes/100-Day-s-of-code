#include <stdio.h>
#include <string.h>
char findFirstRepeating(const char *str) {
    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (count[index] > 0) {
                return str[i];
            }
            count[index]++;
        }
    }
    return '\0'; 
}
int main() {
    char str[] = "abcdefbgh";
    char result = findFirstRepeating(str);
    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", result);
    } else {
        printf("No repeating lowercase alphabets found.\n");
    }
    return 0;
}
