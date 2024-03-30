#include <stdio.h>
#include <string.h>

void palindrome() {
	char word[100];
	int count = 0;
	scanf_s("%s", word, sizeof(word));

	int j = strlen(word);
	for (int i = 0; i < j - 1; i++) {
		if (word[i] == word[j - 1]) {
			count++;
		}
		j--;
	}
	if (count == strlen(word)/2) {
		printf("1");
	}
	else {
		printf("0");
	}
}
