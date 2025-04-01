#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0, i, in_word = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) { 
            if (!in_word) {
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}