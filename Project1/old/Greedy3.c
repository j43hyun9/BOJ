#include <stdio.h>

void Greedy3() {
	int N = 0;
	int coin[10];
	int K = 0;
	int cnt = 0;
	scanf_s("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &coin[i]);
	}

	int i = N - 1;
	while (K > 0) {
		if (coin[i] < K) {
			K = K - coin[i];
			cnt++;
		}
		else {
			i--;
		}
	}
	printf("%d", cnt);

}