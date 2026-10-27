/* Q125. Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content. */
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    char text[256];
    fptr = fopen("example.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a new line of text to append: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        fprintf(fptr, "%s", text);
    }
    fclose(fptr);
    printf("Text appended successfully!\n");
    return 0;
}
