#include <stdio.h>

int main() {
    int n;

    printf("Input\n"); 
    scanf("%d", &n);

    printf("\nOutput\n\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}