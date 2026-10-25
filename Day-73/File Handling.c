/* Q123. Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines. */
#include <stdio.h>
#include <ctype.h>
int main() {
    char filename[100];
    FILE *fp;
    char ch; 
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int inWord = 0; 
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        charCount++; 
        if (ch == '\n') {
            lineCount++; 
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++; 
        }
    }
    if (charCount > 0 && lineCount == 0) {
        lineCount = 1;
    }
    fclose(fp);
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);
    return 0;
}
