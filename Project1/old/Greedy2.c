#include <stdio.h>

int* BasdSort(int* arr, int len);

int asdafgwqrf() {
	int N = 0;
	int delay[1000] = { 0, };
	int* arr;
	int sum = 0;
	int len = sizeof(delay) / sizeof(int);

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &delay[i]);
	}

	arr = BasdSort(delay, len);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < i+1; j++) {
			sum += arr[j];
		}
	}
	
	printf("%d", sum);
	return 0;
}

int* BasdSort(int* arr, int len) {
	int i, j, index, temp;

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < (len-1) - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return arr;
}