/* Q124. Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc(). */
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    int ch;
    printf("Enter source file name: ");
    scanf("%99s", sourcePath);
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourcePath);
        return 1; 
    }
    printf("Enter destination file name: ");
    scanf("%99s", destPath);
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file '%s'.\n", destPath);
        fclose(sourceFile); 
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("File copied successfully!\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
