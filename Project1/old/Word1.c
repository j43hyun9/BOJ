#include <stdio.h>
#include <string.h>

void Word1() {
	int N;
	char word[100];
	int checker = 1;
	int count = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%s", word, sizeof(word));
		if (strlen(word) > 2) {
			for (int j = 0; j < strlen(word) - 2; j++) {
				for (int k = j; k < strlen(word) - 2; k++) {
					if (word[j] == word[k + 2])
						checker = 0;
				}
			}
		}
			if (checker) {
				count++;
			}
			else {
				checker = 1;
			}
	}

	printf("%d", count);
}