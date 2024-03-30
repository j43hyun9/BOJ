#include <stdio.h>

void main() {

	int T;
	int change;
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf_s("%d", &change);

		printf("%d ", change / 25);
		if (change >= 25) {
			
			change %= 25;
		}
		printf("%d ", change / 10);
		if (change >= 10) {
			change %= 10;
		}
		printf("%d ", change / 5);
		if (change >= 5) {
			change %= 5;
		}
		printf("%d\n", change / 1);
		if (change >= 1) {
			change -= 1;
		}
	}
	
}