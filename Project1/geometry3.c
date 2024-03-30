#include <stdio.h>

void geometry3() {

	int x, y, w, h;
	int min_distance = 999;
	int arr[4];
	scanf_s("%d %d %d %d", &x, &y, &w, &h);

	arr[0] = x;
	arr[1] = y;
	arr[2] = x - w;
	arr[3] = y - h;

	for (int i = 0; i < 4; i++) {
		if (arr[i] < 0)
			arr[i] *= -1;
		if (min_distance > arr[i]) {
			min_distance = arr[i];
		}
	}

	printf("%d", min_distance);

}