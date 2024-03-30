#include <stdio.h>

void doublequickSort(int* data, int* data2, int start, int end);

int N;
int s[100000] = { 0, };
int e[100000] = { 0, };

void greedy4() {
	
	int cnt = 1;
	int max = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d %d", &s[i], &e[i]);
	}
	doublequickSort(e, s, 0, N-1);

	max = e[0];
	for (int i = 1; i < N; i++) {
		//::1:: printf("%d ", end[i]);
		/*::2:: printf("%d %d\n", s[i], e[i]);*/
		if (max < s[i]) {
			max = e[i];
			cnt++;
		}
	}

	printf("%d", cnt);
}

void doublequickSort(int* data, int* data2, int start, int end) {
	if (start >= end) { // 원소가 1개인 경우
		return;
	}

	int key = start; // 키는 첫번째 원소 
	int i = start + 1;
	int j = end;
	int temp;


	while (i <= j) { // 엇갈릴때까지 반복
		while (data[i] <= data[key]) { // 키 값보다 큰 값을 만날때까지 오른쪽 이동
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날떄까지 왼쪽으로 이동
			j--;
		}
		if (i > j) {// 엇갈렸다면
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;

			temp = data2[j];
			data2[j] = data2[key];
			data2[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;

			temp = data2[j];
			data2[j] = data2[key];
			data2[key] = temp;
		}
	}
	doublequickSort(data, data2, start, j - 1);
	doublequickSort(data, data2, j + 1, end);
}
