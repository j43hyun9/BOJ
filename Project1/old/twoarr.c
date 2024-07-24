#include <stdio.h>

void twoarr() {
	int N;
	int graph[100][100] = { 0, };
	int area = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		int height, width;
		scanf_s("%d %d", &height, &width);
		for (int j = height; j < height + 10; j++) {
			for (int k = width; k < width + 10; k++) {
				graph[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (graph[i][j] == 1) {
				area++;
			}
		}
	}
	printf("%d", area);
}