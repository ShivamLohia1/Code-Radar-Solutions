#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[20000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    scanf("%d", &m);
    int player[20000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    int denseRank[20000];
    denseRank[0] = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            denseRank[i] = denseRank[i - 1];
        } else {
            denseRank[i] = denseRank[i - 1] + 1;
        }
    }

    int i = n - 1;
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= ranked[i]) {
            i--;
        }
        if (i < 0) {
            printf("1\n");
        } else {
            printf("%d\n", denseRank[i] + 1);
        }
    }

    return 0;
}
