// Your code here...
#include <stdio.h>

int main() {
    char str1[1000], str2[1000], result[2000];
    int i = 0, j = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        result[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        result[j] = str2[i];
        i++;
        j++;
    }

    result[j] = '\0';

    printf("%s\n", result);
    return 0;
}