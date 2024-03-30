#include <stdio.h>

int A1[500000] = { 0, };

void Runtime1() {
	int n;
	int cnt = 0;
	scanf_s("%d", &n);

	if (!(MenOfPassion1(A1, n))) {
		cnt++;
	}

	printf("%d \n", cnt);
	printf("%d", n-n);
}

int MenOfPassion1(int A[], int n) {
	int i = n / 2;
	return A[i];
}