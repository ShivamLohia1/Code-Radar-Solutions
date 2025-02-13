// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Input\n"); 
    scanf("%d %d", &num1, &num2); 

    printf("\nOutput\n"); 

    int result = num1 & num2;

    printf("%d\n", result);

    return 0;
}