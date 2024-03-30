#include <stdio.h>

void PerfectNumber() {
	int n;
	int sum = 0;
	int cnt = 0;
	int factor[100000];

	while (1) {
		scanf_s("%d", &n);

		if (n == -1)
			return;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				factor[cnt] = i;
				cnt++;
			}
		}

		printf("%d", n);

		if (sum == n) {
			printf(" = ");
			for (int i = 0; i < cnt; i++) {
				printf("%d", factor[i]);
				if (i != cnt - 1)
					printf(" + ");
			}
		}
		else {
			printf(" is NOT perfect.");
		}
		sum = 0;
		cnt = 0;
	}
}