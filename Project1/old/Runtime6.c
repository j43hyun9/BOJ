#include <stdio.h> // �˰��� ���� - �˰����� ���� �ð� 6

void Rrer() {
	long long n;
	int cnt = 0;
	scanf_s("%lld", &n);
	
	for (int i = 3; i <= n; i++) {
		cnt += ((i - 2) * (i - 1)) / 2;
	}
	printf("%lld\n3", cnt);
}

void asdd() {
	// �Ǹ���
	int n=0;
	int count = 0;
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n - 1; i++) {
		for (int j = i; j <= n - 2; j++) {
			count++;
		}
	}

	printf("%d", count);
}