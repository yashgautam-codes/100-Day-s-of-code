/* Q114. Write a program to take a string s as input. 
The task is to find the length of the longest substring without repeating characters. 
Print the length as output.*/
#include <stdio.h>
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    int max_len = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int visited[256] = {0}; 
        int current_len = 0;
        for (int j = i; s[j] != '\0'; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break; 
            }
            visited[(unsigned char)s[j]] = 1; 
            current_len++;
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    printf("%d\n", max_len);
    return 0;
}
