#include <stdio.h>

void Read1() {
	char word[5][15];
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%s", word[i], sizeof(word[i]));
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {

			if (word[j][i] == NULL) {
				continue;
			}
			else {
				printf("%c", word[j][i]);
			}
		}
	}
}