/* Q126. Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content. */
#include <stdio.h>
#include <stdlib.h>
int main() {
    char filename[100];
    FILE *file;
    char ch;
    printf("Enter the filename to open: ");
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file '%s'. Make sure it exists.\n", filename);
        return 1; 
    }
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n--------------------\n");
    fclose(file);
    return 0;
}
