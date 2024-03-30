#include <stdio.h>

void graph() {
	int X;
	int i = 1;
	int j = 1;
	scanf_s("%d", &X);

	for (int k = 1; X-1; X--) {
		if (k == 1 && i == 1) {
			j++;
			k = 0;
		}
		else if (k == 0 && j == 1) {
			i++;
			k = 1;
		}
		else if (k == 0) {
			i++;
			j--;
		}
		else if (k == 1) {
			i--;
			j++;
		}
		else {
			printf("Bug");
		}
	}

	printf("%d/%d", i, j);
}
