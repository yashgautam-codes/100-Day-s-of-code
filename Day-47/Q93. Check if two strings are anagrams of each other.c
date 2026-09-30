#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool check_anagram(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    if (check_anagram(s1, s2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", s1, s2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", s1, s2);
    }
    return 0;
}
