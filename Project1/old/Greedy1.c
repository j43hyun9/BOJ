#include <stdio.h>

// ������ ������ ��ġ���� ��������.. 
// �ּҰ��� ã�� ������ ���ǹ��� ���� ��ġ������ ���� �����ϰ� �ּҰ��� ã�� �� �־���.
void Greedy1() {
	int N;
	int bag = 0;
	int min = 9999;
	
	scanf_s("%d", &N);
	for(int i=0; i<N; i++) {
		for (int j = 0; j < N; j++) {
			if ((5 * i) + (3 * j) - N == 0) {
				if (min > i + j) {
					min = i + j;
				}
			}
			
		}
	}
	bag = min;

	if (bag == 9999) {
		printf("%d", -1);
	}
	else {
		printf("%d", bag);
	}

}