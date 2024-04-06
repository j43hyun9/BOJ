#include <stdio.h>
#include <stdlib.h>

//int compare(const int* a, const int* b);

void asdad() {
	int N;
	int lope[10000];
	int max = 0;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &lope[i]);
	}

	//qsort(lope, N, sizeof(int), compare);
	
	int i = 0;
	while (1) {
		if (i >= N) {
			break;
		}
		if (max < lope[i] * (i + 1)) {
			max = lope[i] * (i + 1);
		}
		i++;
	}
	printf("%d", max);
}

//int compare(const int* a, const int* b) {
//	return *b - *a;
//}