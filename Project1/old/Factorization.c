#include <stdio.h>

void Factorization()
{
	int N;

	scanf_s("%d", &N);

	while (N != 1) {
		for (int i = 2; N; i++) {
			if (N == 1) {
				return;
			}

			else if (N % i == 0) {
				printf("%d \n", i);
				N /= i;
				break;
			}
		}

	}
}