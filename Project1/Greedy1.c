#include <stdio.h>

// 간단한 미지수 수치대입 문제였다.. 
// 최소값을 찾는 문제라서 조건문에 대해 수치대입을 통해 간단하게 최소값을 찾을 수 있었다.
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