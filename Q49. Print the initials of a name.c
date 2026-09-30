#include <stdio.h>
#include <ctype.h>
void printInitials(char *name) {
    if (name[0] == '\0') {
        return;
    }
    printf("%c", toupper(name[0]));
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf(". %c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); 
    printf("Your initials: ");
    printInitials(name);
    return 0;
}
