#include <stdio.h>

int operB(int B);
int operA(int A);

void asfaffnwjwhjrh() {
	int A, B;
	int cnt = 0;
	scanf_s("%d %d", &A, &B);
	// 2 162 
	// (while) { if(B%2 == 0) operA(B) -> 162 -> 81
	// else operB(B) -> 8 ...
	// (while)
	//  �� �� �ܰ踦 B���� A���� �������������� �ݺ���
	// ���� ���̽�
	// 4 42
	// 42 -> 21 -> 2 -> 1 -
	// 2 162
	// 162 81   
	while (1) {
		if (B == A) {
			printf("%d", cnt + 1);
			break;
		}
		else if (B <= 0) {
			printf("%d", -1);
			break;
		}

		if (B % 2 == 0) {
			B = operA(B);
		}
		else {
			B = operB(B);
		}
		cnt++;
	}
}

int operB(int B) {

	B -= 1;
	B = B / 10;

	return B;
}

// 2002 -> 1001
// 2001 -> 1001.5
int operA(int B) {
	B /= 2;

	return B;
}