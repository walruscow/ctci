#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Too few arguments.");
        return 1;
    }

    char* s1 = argv[1];
    char* s2 = argv[2];

    int chars[256] = {0};
    int i = 0;

    while (1) {
        if (!s1[i] || !s2[i]) {
            if (s1[i] != s2[i]) {
                printf("The strings are not anagrams.\n");
                return 2;
            }
            break;
        }
        chars[s1[i]] += 1;
        chars[s2[i]] -= 1;
        i += 1;
    }

    for (int i = 0; i < 256; ++i) {
        if (chars[i]) {
            printf("The strings are not anagrams.\n");
            return 2;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
