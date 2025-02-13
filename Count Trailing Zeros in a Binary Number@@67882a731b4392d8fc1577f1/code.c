// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int count = 0;
    while (num > 0 && !(num & 1)) {
        num >>= 1;
        count++;
    }
    printf("%d\n", count);
    return 0;
}