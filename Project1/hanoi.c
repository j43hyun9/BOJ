#include <stdio.h>

void asdsdad() {
	HanoiTower(2, 'A', 'B', 'C');
}

int HanoiTower(int num, char A, char B, char C) {
	if (num == 1) {
		printf("\n����1 ��(��) %c���� %c�� �̵�", A, C);
		return;
	}
	else {
		HanoiTower(num - 1, A, C, B);
		printf("\n����%d ��(��) %c���� %c�� �̵�", num, A, C);
		HanoiTower(num - 1, B, A, C);
	}
}