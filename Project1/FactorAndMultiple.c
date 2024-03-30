#include <stdio.h>

void FactorAndMultiple() {
	int A, B;
	int temp;
	
	
	while (1) {
		
		scanf_s("%d %d", &A, &B);

		if (A == B) {
			break;
		}
		else {
			if (A % B == 0) {
				printf("multiple");
			}
			else if (B % A == 0) {
				printf("factor");
			}
			else {
				printf("neither");
			}
		}
	}
}