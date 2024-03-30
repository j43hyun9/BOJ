#include <stdio.h>

void dot() {
	

	for (int i = 0; i < 5; i++) {
		printf("*");
		for (int j = 0; j < i; j) {
			printf("O");
		}
	}
}