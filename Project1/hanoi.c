#include <stdio.h>

void asdsdad() {
	HanoiTower(2, 'A', 'B', 'C');
}

int HanoiTower(int num, char A, char B, char C) {
	if (num == 1) {
		printf("\n원반1 을(를) %c에서 %c로 이동", A, C);
		return;
	}
	else {
		HanoiTower(num - 1, A, C, B);
		printf("\n원반%d 를(을) %c에서 %c로 이동", num, A, C);
		HanoiTower(num - 1, B, A, C);
	}
}