// Your code here...
#include <stdio.h>

int main() {
    char signal;

    scanf("%c", &signal);

    switch (signal) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}