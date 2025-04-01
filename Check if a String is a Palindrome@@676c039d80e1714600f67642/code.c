// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (right > left) {
        if (str[left++] != str[right--]) {
            return false;
        }
    }
    return true;
}

int main() {
    char inputString[100];
    scanf("%s", inputString);
    if (isPalindrome(inputString)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}