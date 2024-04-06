#include <stdio.h>

int HanoiTower(int num, char A, char B, char C);

int cnt = 2;

int qweqedadasd() {
	int N;
	scanf_s("%d", &N);
	for (int i = 0; i < N-1; i++) {
		cnt *= 2;
	}
	cnt--;
	printf("%d", cnt);
	HanoiTower(N, 'A', 'B', 'C');
	
	return 0;
}

int HanoiTower(int num, char A, char B, char C) {
	if (num == 1) {
		printf("\n%c %c", A, C);
		cnt++;
		return;
	}
	else {
		HanoiTower(num - 1, A, C, B);
		printf("\n%c %c", A, C);
		cnt++;
		HanoiTower(num - 1, B, A, C);
	}
}