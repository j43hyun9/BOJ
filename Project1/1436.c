#include <stdio.h>

int main() {

	int num = 0;
	scanf("%d", &num);
	hx(num);
}

int hx(int num) {
	int temp = 0;
	int j = 1;
	for (int i = 0; i < num; i++) {
		if (!(j % 16)) {
			j = 0;
		}
		fx(j, &temp);
		printf("66");
		gx(j);
		j++;
	}
}
int fx(int num, int * temp) {
	if ((*temp) == 0) {
		(*temp)++;
		return;
	} else if (num <= 6 && 0 < num) {
		printf("%d", *temp);
		(*temp)++;
	}
}

int gx(int num) {
	if (num <= 6 && num >= 0)
		printf("6");
	else if (num >= 7 && num <= 16) {
		printf("%d",num - 7);
	}
}