#include <stdio.h>
#include <time.h>

void Proceed1() {
	int A, B, V;
	int day = 0;
	scanf_s("%d %d %d", &A, &B, &V);
	
	day = (V - B) / (A - B) + 1;
	// �����̰� ������ ���� �����ϱ� ������ �ö󰡾��� ���Ǵ� V - B �̴�. 
	// ���� �̵��Ÿ��� A-B �̱⿡ A-B�� ����������ϸ�, �� ������ �������� ���� ��� �� + 1�� ���ش�.
	printf("%d\n", day);
}