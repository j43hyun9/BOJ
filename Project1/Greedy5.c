#include <stdio.h>
#include <string.h>

void Greedy5() {
	int N;
	int A[50] = { 0, };
	int B[50] = { 0, };
	int sum = 0;
	scanf_s("%d", &N); 
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &B[i]);
	}

	int min, max; // S의 최솟값은 A와 B 배열의 각각의 최댓값 * 최솟값의 합이다.
	int index; // 내부 반복문 탈출 후 인덱스 값 접근
	for (int i = 0; i < N; i++) {		
		max = -1; min = 101;
		for (int j = 0; j < N; j++) {
			if (max < A[j]) {
				max = A[j];
				index = j;
				
			}
		}
		A[index] = -1;
		for (int j = 0; j < N; j++) {
			if (min > B[j]) {
				min = B[j];
				index = j;
			}
		}
		B[index] = 101;
		sum += max * min;
	}
	printf("%d", sum);
}