#include <stdio.h>

void fibomain() {
	long fibonum = 0;

	
	fibonum = fibo(10);

	printf("%d", fibonum);
}


int fibo(int num) {
	/*if (num == 1)
		return 0;
	else if (num == 2)
		return 1;*/

	if (num < 3)
		return 1;

	return fibo(num - 1) + fibo(num - 2);
}