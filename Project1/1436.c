#include <stdio.h>
#define RADIX 20
#define DISASTER_NUMBER 666
int main() {

	int num = 0;
	scanf("%d", &num);
	solution(num);
}

int solution(int x) {
	int x_div = x / RADIX; // 체계 내부에서는 "자리 올림수" 의 의미를 갖는다. 
	int x_mod = x % RADIX;

	if (0 < x && x < 7) {
		return (x - 1) * 1000 + DISASTER_NUMBER;
	}
	else if (7 <= x && x <= 16) {
		return ( 10 * DISASTER_NUMBER) + (x - 7);
	}
}