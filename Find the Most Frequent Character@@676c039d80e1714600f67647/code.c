// Your code here...
#include <stdio.h>
#include <string.h>
#include <limits.h>

char findMostFrequentCharacter(const char *str) {
    if (str == NULL || str[0] == '\0') {
        return '\0';
    }
    int frequency[256] = {0};
    int maxFrequency = INT_MIN;
    char mostFrequentChar = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentChar = (char)i;
        } else if (frequency[i] == maxFrequency && (char)i < mostFrequentChar) {
            mostFrequentChar = (char)i;
        }
    }
    return mostFrequentChar;
}

int main() {
    char inputString[1000];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    char mostFrequent = findMostFrequentCharacter(inputString);
    if (mostFrequent != '\0') {
        printf("The most frequent character is: %c\n", mostFrequent);
    } else {
        printf("The string is empty.\n");
    }
    return 0;
}