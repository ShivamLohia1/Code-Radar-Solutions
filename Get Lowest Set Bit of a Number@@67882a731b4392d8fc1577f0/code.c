// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int pos = 0;
    while (!(num & 1)) {
        num >>= 1;
        pos++;
    }
    printf("%d\n", pos);
    return 0;
}