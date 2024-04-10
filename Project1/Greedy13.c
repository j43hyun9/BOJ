#include <stdio.h>

int Greedy13ㄴ() {
	int N;
    int cur = 0, next = 0;
    int index = 0;
    int money = 0;
	long length[100000] = { 0, };
	long fuer[100000] = { 0, };
    int lencnt = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N - 1; i++) {
		scanf_s("%lld", &length[i]);
        lencnt += length[i];
	}

	for (int i = 0; i < N; i++) {
		scanf_s("%lld", &fuer[i]);
	}
    fuer[N - 1] = 0;
    int j = 0; int i = 0;
    while (1) {
        if (fuer[j + 1] == 0)
            break;
        cur = fuer[i];
        for (j = i; j < N; j++) {
            if (cur < fuer[j+1])
                continue;
            else if (cur >= fuer[j+1]) { 
                // fuer[j+1] == fuer[N-1] 중복된 주유소 비용이 있을 경우 로직은 모순됨. 
                // 맨 마지막 주유소의 비용은 가질 수 없는 값을 넣어주고 조건 검사함.
                if (fuer[j+1] == 0) {
                    money += cur * lencnt;
                    break;
                }
                index = j+1;
                money += length[j] * fuer[j];
                printf("\n%d %d %d \n" , money, length[j] , fuer[j]);
                lencnt -= length[j];
                i = index;
                break;
            }
        }
    }
    printf("%d", money);
   

	return 0;
}

