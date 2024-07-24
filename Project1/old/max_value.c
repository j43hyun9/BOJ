#include <stdio.h>

void max_value() {
	int tarr[9][9];
	int max = 0;
	int column = 0;
	int row = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf_s("%d", &tarr[i][j], sizeof(tarr[i][j]));
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < tarr[i][j]) {
				max = tarr[i][j];
				column = i+1;
				row = j+1;
			}
		}
	}

	printf("%d \n", max);
	printf("%d %d", column, row);

}