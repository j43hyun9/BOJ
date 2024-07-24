#include <stdio.h>

void procession() {

	int N, M;
	int A[100][100];
	int B[100][100];

	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%d", &A[i][j], sizeof(A[i][j]));
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%d", &B[i][j], sizeof(A[i][j]));
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}

		printf("\n");
	}

}