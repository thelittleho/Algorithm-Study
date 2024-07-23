#include <stdio.h>

int main() {
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n / 5; j++) {
            printf("++++ ");
        }
        for (int j = 0; j < n % 5; j++) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}
