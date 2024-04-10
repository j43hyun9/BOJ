#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num[1000000] = { 0 , };
int compsdsd(const int* a, const int* b);
int asdsad() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	qsort(num, N, sizeof(int), compsdsd);
	
	for (int i = 0; i < N; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}

int compsdsd(const int* a, const int* b) {
	return (*a - *b);
}
