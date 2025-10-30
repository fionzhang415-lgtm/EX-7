#include <stdio.h>

int main() {
    char *names[] = {
        "IU",
        "IU Lee",
        "李知恩"
    };

    char **ptr = names;  // 指向 names 陣列的指標（即 char**）

    for (int i = 0; i < 3; i++) {
        printf("ptr[%d] = %s\n", i, *(ptr + i));
    }

    return 0;
}
