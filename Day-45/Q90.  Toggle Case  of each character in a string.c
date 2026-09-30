#include <stdio.h>
#include <ctype.h>
void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]);
        } else if (islower((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
        }
    }
}
int main() {
    char text[] = "Hello, World! 123";  
    printf("Original: %s\n", text);
    toggleCase(text);
    printf("Toggled : %s\n", text); 
    return 0;
}
