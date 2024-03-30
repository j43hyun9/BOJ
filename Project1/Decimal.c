#include <stdio.h>

void Decimal(void) {
    int n;
    int num, count = 0;

    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &num);
        for (int j = 2; j <= num; j++) {
            if (num == j) {
                count++;
            }
            if (num % j == 0) {
                break;
            }
        }
    }
    printf("%d", count);
}​;