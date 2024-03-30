#include <stdio.h>

void Factor() {

	int N, K;
	int cnt = 0;

	scanf_s("%d %d", &N, &K);

	for (int i = 1; i < N + 1; i++) {
		if (N % i == 0) {
			cnt++;
			if (K == cnt)
				printf("%d", i);
		} 
	}
}