// ��������  30�� ��� -> 3�ǹ���̸鼭 && ���� �ڸ��� 0�̾�� �Ѵ�.
//  �������� 3�� ��� -> �� �ڸ� ���� ���� 3�� ����� ���̴�.

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//int compare(const void* a, const void* b);
char str[100001];

int asdasdsad() {
	int zero = 0, sum = 0;
	scanf_s("%s", str, sizeof(str)); 

	if (strchr(str, '0') == NULL || str[0] == '0') {
		printf("-1");
		return 0;
	}
	
	for (int i = 0; i < strlen(str); i++) {
		sum += str[i] - 48;
	}

	if (sum % 3 != 0 || sum == 0) {
		printf("-1");
		return 0;
	}
	else {
		/*qsort(str, sizeof(str) - 1, sizeof(char), compare);*/
	}

	printf("%s", str);

	return 0;
}

//int compare(const void* a, const void* b) {
//	const char* n1 = (const char*)a;
//	const char* n2 = (const char*)b;
//	if (*n1 > *n2) {
//		return -1;
//	}
//	else if (*n1 == *n2) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}