#include<stdio.h>

void asdsdadsds() {
    int i = 0, n, a; char c;

    //for���� �̿��� �Է� �� ���ǽ� ó��
    for (scanf_s("%d", &n); scanf_s("%c", &c), c != 10;) {

        //-�϶� i=1�� �ٲ��ش�.
        if (c == '-') i = 1;
        scanf_s("%d", &a);

        //i=1�϶�, ��, -��ȣ�� ���ʷ� ������ �� n���� ��� ���ش�.
        if (i) n -= a;

        //i=0, �� ���� -��ȣ�� ������ �ʾҰų�, ó�� �Է¹޾��� �� n�� �Է¹��� ���� �����ش�.
        else n += a;
    }
    printf("%d", n);
}