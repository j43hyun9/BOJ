#include <stdio.h>

void BSort() {

	int arr[] = { 1,5,6,7,4,2,3,8,9,10 };
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}