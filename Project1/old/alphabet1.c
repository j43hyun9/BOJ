#include <stdio.h>
#include <string.h>

void alphabet() {

	char str[1000000];
	int max = 0;
	char maxc;
	int count = 0;
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] > 90) {
			str[i] -= 32;
		}
	}

	for (int i = 0; i < strlen(str); i++) {
		count = 0;
		for (int j = i; j < strlen(str); j++) {
			if (str[i] == str[j])
				count++;

			printf("count = %d\n", count);
		}

		if (max < count) {
			max = count;
			printf("max= %d\n", max);
			count = 0;
			maxc = str[i];
		}
		else if (max == count) {
			maxc = '?';
		}
	}

	printf("%c", maxc);
	
}