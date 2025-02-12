#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    scanf("%d %d", &num1, &num2);
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}