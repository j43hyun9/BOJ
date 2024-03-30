#include <stdio.h>

void geometry4() {
	int x, y;
	int xcnt[1000] = { 0, };
	int ycnt[1000] = { 0, };
	
	for (int i = 0; i < 3; i++) {
		scanf_s("%d %d", &x, &y);
		xcnt[x]++;
		ycnt[y]++;
	}

	for (int i = 0; i < sizeof(xcnt) / sizeof(int); i++) {
		if (xcnt[i] == 1)
			printf("%d ", i);
	}

	for (int i = 0; i < sizeof(ycnt) / sizeof(int); i++) {
		if (ycnt[i] == 1)
			printf("%d ", i);
	}
}