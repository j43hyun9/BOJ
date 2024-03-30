#include <stdio.h>

void geometry() {
	int line = 1;
	int dot = (line + 1) * (line + 1);
	int N;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		line *= 2;
		dot = (line + 1) * (line + 1);
	}
	printf("%d", dot);
}