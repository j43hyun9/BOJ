#include <stdio.h>

void Math1()
{
    int a, b, c;
    int temp, sum;

    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b) {
        temp = b;
        b = a;
        a = temp;
    }
    if (b >= c) {
        temp = c;
        c = b;
        b = temp;
    }
    if (a >= b) {
        temp = b;
        b = a;
        a = temp;
    }

    sum = a + b;
    if (c < sum) {
        sum += c;
    }
    else sum += sum - 1; // ( sum = sum + sum - 1)

    printf("%d\n", sum);

    return 0;
}