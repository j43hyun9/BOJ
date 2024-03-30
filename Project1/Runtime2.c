#include <stdio.h>

int A[500000];

void Runtime2() {
	int n;
	int cnt;
	int power;
	scanf_s("%d", &n);
	if (!(testet(A, n))) {
		cnt = n;
		power = n - n + 1;
	}

	printf("%d\n", cnt);
	printf("%d", power);
}

int testet(int A[], int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += A[i];
	}
	return sum;
}