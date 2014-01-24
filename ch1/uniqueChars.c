#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        return 1; // No word given - error
    }

    char* word = argv[1];
    int index = 0;
    short seen[256] = {0};
    char c;

    while (c = word[index]) {
        printf("%c\n", c);
        if (seen[c]) {
            printf("Not unique - saw two of '%c'.\n", c);
            return 0;
        }
        seen[c] = 1;
        index += 1;
    }

    printf("Word has no duplicate chars.\n");
    return 0;
}
