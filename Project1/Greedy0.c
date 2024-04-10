#include <stdio.h>
#include <stdlib.h>
//int compare(const int* a, const int* b);
int card[100000];
int N;
int j;
int k;
int CHECK_NUM = 1001;

int Greedy0() {
	int cnt = 0;
	int sum = 0;
	int fnum = 0, snum = 0;
	scanf_s("%d", &N);
	init(N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &card[i]);
	}
	
	while (1) {

		fnum = pop();
		snum = pop();
		if (fnum == CHECK_NUM || snum == CHECK_NUM) {
			break;
		}
		cnt = fnum + snum;
		sum += cnt;
		insert(cnt);
	}
	printf("%d", sum);

	return 0;
}

int init(int size) {
	j = size;
	k = size;
}
int pop() {
	
	int temp;
	temp = card[0];

	for (int i = 0; i < j-1; i++) {
		card[i] = card[i + 1];
	}
	card[j - 1] = CHECK_NUM;

	j--;
	return temp;
}

int insert(int num) {
	if (card[N - 1] != CHECK_NUM) {
		printf("저장할 공간이 부족합니다.");
		return 0;
	} 

	else {
		card[k - 1] = num;
		/*qsort(card, N, sizeof(int), compare);*/
		j++;
	}
}
//int compare(const int* a, const int* b) {
//	return (*a - *b);
//}