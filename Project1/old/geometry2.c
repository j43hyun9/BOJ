#include <stdio.h>

void geometry2() {
	int N;
	int room;
	scanf_s("%d", &N);
	if (N == 1) {
		room = 1;
	}
	else if (N <= 7) {
		room = 2;
	}
	else if (N <= 19) {
		room = 3;
	}
	else if (N <= 37) {
		room = 4;
	}
	else if (N <= 61) {
		room = 5;
	}
	else {
		room = 6;
	}
	printf("%d", room);
}