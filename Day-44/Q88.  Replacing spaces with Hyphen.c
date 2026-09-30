#include <stdio.h>
void replace_spaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char text[] = "Learn C Programming Online";    
    printf("Original: %s\n", text);    
    replace_spaces(text);    
    printf("Modified: %s\n", text);    
    return 0;
}
