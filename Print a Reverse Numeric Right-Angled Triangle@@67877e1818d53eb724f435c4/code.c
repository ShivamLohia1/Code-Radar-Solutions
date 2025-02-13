#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    if (num <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Check divisibility by 2 and 3
    }
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d ", &num);
        printf("%d\n", isPrime(num)); 
    }
    return 0;
}