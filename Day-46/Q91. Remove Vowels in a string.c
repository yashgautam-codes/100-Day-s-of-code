#include <stdio.h>
#include <string.h>
int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
void removeVowels(char *str) {
    int i = 0; 
    int j = 0; 
    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0'; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);
    return 0;
}
