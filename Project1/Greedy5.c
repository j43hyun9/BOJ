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

	int min, max; // S�� �ּڰ��� A�� B �迭�� ������ �ִ� * �ּڰ��� ���̴�.
	int index; // ���� �ݺ��� Ż�� �� �ε��� �� ����
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