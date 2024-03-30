#include <stdio.h>


void numberconversion2() {
	int N, B;

	scanf_s("%d %d", &N, &B);
	N += 1;
	for (int i = N; i; i /= B) {
		if (i > B) {
			printf("%c", B + 54);
		}
		else if (i == B) {
			printf("%c", B + 54);
			i -= 1;
		}
		else {
			printf("%c", i + 54);
		} 
	}
}