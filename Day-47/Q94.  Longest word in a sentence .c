#include <stdio.h>
#include <string.h>
int main() {
    char sentence[256];
    char longestWord[256] = "";
    int maxLength = 0;
    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        sentence[strcspn(sentence, "\n")] = '\0';
        char *word = strtok(sentence, " ,.-!?");
        while (word != NULL) {
            int currentLength = strlen(word);
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, word); 
            }
            word = strtok(NULL, " ,.-!?");
        }
        if (maxLength > 0) {
            printf("The longest word is: %s\n", longestWord);
            printf("Length: %d characters\n", maxLength);
        } else {
            printf("No valid words found.\n");
        }
    }
    return 0;
}
