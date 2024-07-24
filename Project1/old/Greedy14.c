#include <stdio.h>
#include <stdlib.h>

int asfsafjafjah() {
	char str[1000000];
	
	scanf_s("%s", str, sizeof(str));

	int one = 0, zero = 0;
	// 012 34 56 index
	// 000 11 00
	// 000 ^ zero++ index <- 3
	// 
	
	int j = 0;
	while (1) {
		if (str[j] == '0') {
			while (str[j + 1] == '0')
				j++;
			zero++;
			j++;
		}
		else {
			while (str[j + 1] == '1')
				j++;
			one++;
			j++;
			}
		if (j == strlen(str))
			break;
	}

	int min = (zero < one) ? zero : one;

	printf("%d", min);
		return 0;
}
