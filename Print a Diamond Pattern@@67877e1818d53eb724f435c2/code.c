#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    // Upper half of the diamond
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = N - 1; i >= 1; i--) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}