// Your code here...
#include <stdio.h>

int main() {
    int num, divisor;

    scanf("%d %d", &num, &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (num % divisor == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}