// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count = 0, i;
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            count++;
    }
    if (str[0] != '\0')
        count++;
    if(str[strlen(str)-1] == '\n')
        count--;
    printf("%d\n", count);
    return 0;
}