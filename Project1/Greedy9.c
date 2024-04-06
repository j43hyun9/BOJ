#include <stdio.h>

void Greedy9() {
	int A = 300;
	int B = 60;
	int C = 10;
	int T;

	scanf_s("%d", &T);

	if (T >= 300) {
		A = T / 300;
		T %= 300;
	}
	else A = 0;
	if (T >= 60) {
		B = T / 60;
		T %= 60;
	
	}
	else B = 0;
	if (T >= 10) {
		C = T / 10;
		T %= 10;
	}
	else C = 0;

	if (T != 0) {
		printf("%d", -1);
		return;
	}
	else {
		printf("%d %d %d", A, B, C);
	}
}