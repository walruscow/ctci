#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Too few arguments\n");
        return 1;
    }

    char* word = argv[1];
    // Length AFTER replacing ' ' with "%20", counting '\0'
    int rlen = 1;
    // Determine length of new word
    for (int i = 0; word[i]; ++i) {
        rlen += (word[i] == ' ') ? 3 : 1;
    }

    char rstr[rlen];

    int ridx = 0;
    for (int i = 0; word[i]; ++i) {
        if (word[i] == ' ') {
            rstr[ridx] = '%';
            rstr[ridx + 1] = '2';
            rstr[ridx + 2] = '0';
            ridx += 3;
        }
        else {
            rstr[ridx] = word[i];
            ridx += 1;
        }
    }

    // Always null terminate :)
    rstr[rlen - 1] = '\0';
    printf("Replaced string is %s.\n", rstr);

    return 0;
}
