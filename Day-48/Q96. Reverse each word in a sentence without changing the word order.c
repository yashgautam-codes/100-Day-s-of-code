#include <stdio.h>
#include <string.h>
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}
void reverseWords(char* sentence) {
    char* word_start = sentence;
    char* current = sentence;
    while (*current != '\0') {
        if (*current == ' ') {
            reverse(word_start, current - 1);
            word_start = current + 1; 
        }
        current++;
    }
    reverse(word_start, current - 1);
}
int main() {
    char sentence[] = "Hello World from C programming";   
    printf("Original: %s\n", sentence);    
    reverseWords(sentence);    
    printf("Modified: %s\n", sentence);    
    return 0;
}
