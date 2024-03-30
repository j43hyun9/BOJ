#include <stdio.h>
#include <string.h>

void masdad() {
	// - (45) , + (43)
	char str[50];
	int num[50] = { 0, };
	int sign[25];

	scanf_s("%s", str, sizeof(str));

	/*printf("%s ", str);*/  // 1 2 '\0'
	int j = 0, k = 0 , l = 0;
	for (int i = 0; i<strlen(str)+1; i++) {
		/*::1::printf("strlen :%d \n", strlen(str) + 1);*/
		if (str[i] >= 48 && str[i] <= 57) {
			num[j] = str[i] - 48;
			l++;
		}
		else {
			num[j] = l;
			l = 0;
			if (str[i] == 45 /* - */) {
				sign[k] = 1;
				k++;
			}
			else if (str[i] == 43 /* + */) {
				sign[k] = 2;
				k++;
			}
		}
		j++;
	}



	int zero = 0;
	for (int i = 0; num[i] !=0; i++) {
		printf("%d", num[i]);
	}

}	