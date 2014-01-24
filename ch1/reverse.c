#include <stdio.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Too few arguments.\n");
        return 1;
    }

    char* str = argv[1];
    int length = 0;
    while (str[length++]);

    char rstr[length];

    for (int i = 0; i < length - 1; ++i) {
        rstr[length - i - 2] = str[i];
    }
    rstr[length - 1] = '\0';

    printf("%s\n", rstr);

    return 0;
}
