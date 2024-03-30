#include <stdio.h>
#include <string.h>

void numberconversion() {
	char N[100];
	int B;
	int power = 1;
	int sum = 0;
	scanf_s("%s %d", &N,sizeof(N), &B);
	for (int i = 0; i < strlen(N); i++) {
		if (N[i] >= 65) {
			N[i] -= 55;
		}
		else if (N[i] >= 48 && N[i] <= 57) {
			N[i] -= 48;
		}
	}
	for (int i = 0; i < strlen(N); i++) {
		sum += N[i] * power;
		power *= B;
	}
	printf("%d", sum);
}