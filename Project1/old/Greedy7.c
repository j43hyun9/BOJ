#include<stdio.h>

void asdsdadsds() {
    int i = 0, n, a; char c;

    //for문을 이용해 입력 및 조건식 처리
    for (scanf_s("%d", &n); scanf_s("%c", &c), c != 10;) {

        //-일때 i=1로 바꿔준다.
        if (c == '-') i = 1;
        scanf_s("%d", &a);

        //i=1일때, 즉, -부호가 최초로 들어왔을 때 n에서 계속 빼준다.
        if (i) n -= a;

        //i=0, 즉 아직 -부호가 들어오지 않았거나, 처음 입력받았을 땐 n에 입력받은 수를 더해준다.
        else n += a;
    }
    printf("%d", n);
}