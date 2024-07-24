#include <stdio.h>

void Croatia() {

	char word[100];
	int cr = 0;
	scanf_s("%s", word, sizeof(word));


	for (int i = 0; i < strlen(word) - 1; i++) {
		if (word[i] == 'c' && word[i + 1] == '=') {
			cr++;
		}
		else if (word[i] == 'c' && word[i + 1] == '-') {
			cr++;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
			cr++;
		}
		else if (word[i] == 'd' && word[i + 1] == '-') {
			cr++;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			cr++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			cr++;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			cr++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			cr++;
		}
	}

	printf("%d", strlen(word) - cr);
}