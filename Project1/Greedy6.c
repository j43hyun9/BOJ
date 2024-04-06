#include <stdio.h>

void Greedy6() {
	int N;
	int taro = 1000;
	int change[6] = { 500, 100, 50, 10, 5 ,1 };
	int coin = 0;
	scanf_s("%d", &N);
	taro -= N;
	for (int i = 0; i < 6; i++) {
		if (taro >= change[i]) {
			coin += taro / change[i];
			taro = taro % change[i];
		}
	}
	printf("%d", coin);
}