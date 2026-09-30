#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[] = "Mohan Das Karamchand Gandhi";
    char *words[10]; 
    int count = 0;
    char *token = strtok(name, " ");
    while (token != NULL && count < 10) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    }
    if (count > 0) {
        printf("%s\n", words[count - 1]);
    }
    return 0;
}
