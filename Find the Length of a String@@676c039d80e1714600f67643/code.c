#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;
    fgets(str, sizeof(str), stdin);

    if (str[0] == '\n') { 
        printf("0\n");
        return 0;
    }

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("%d\n", length);
    return 0;
}