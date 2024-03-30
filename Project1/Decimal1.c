#include <stdio.h>

void Decimal1() {
	int M, N;
	int cnt = 2;
	int sum = 0;
	int min = 0;
	int boolmin = 1;
	int decimalsum = 0;
	scanf_s("%d %d", &M, &N);

	for (int i = M; i <= N; i++) {
		sum = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}

		if (sum == i) {
			decimalsum += i;
			if (boolmin) {
				boolmin = 0;
				min = i;
			}
		}
	}
	
	if (boolmin == 1)
		printf("-1");
	else
		printf("%d \n%d", decimalsum, min);
}