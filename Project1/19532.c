#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d\n", (int)(float)(((c * e) - (b * f)) / ((a * e) - (b * d))), (int)(float)(((-c * d) + (a * f)) / ((a * e) - (b * d))));
}