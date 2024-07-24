#include <stdio.h>
#include <time.h>

void Proceed1() {
	int A, B, V;
	int day = 0;
	scanf_s("%d %d %d", &A, &B, &V);
	
	day = (V - B) / (A - B) + 1;
	// 달팽이가 낮에만 정상에 도착하기 때문에 올라가야할 부피는 V - B 이다. 
	// 실제 이동거리는 A-B 이기에 A-B로 나누어줘야하며, 딱 나누어 떨어지지 않을 경우 몫에 + 1을 해준다.
	printf("%d\n", day);
}