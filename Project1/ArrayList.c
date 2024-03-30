#include "ArrayList.h"


void ListInit(List* plist)					// �ʱ�ȭ
{
    (plist->numOfData) = 0;     // ����Ʈ�� ����� �������� ���� 0!
    (plist->curPosition) = -1;  // ���� �ƹ� ��ġ�� ����Ű�� ���� !
}

void LInsert(List* plist, LData data)		// ������ ����
{
    if (plist->numOfData >= LIST_LEN) {
        printf("�� �̻� ������ ������ �����ϴ�.");
        return;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;

}

int LFirst(List* plist, LData* pdata)		// ù ������ ����
{
    if (plist->numOfData == 0) { // ����� �����Ͱ� �ϳ��� ���ٸ� �翬�� ������ ���Ѵ�.
        return 0;
    }
    else {
        (plist->curPosition) = 0;   // ���� ��ġ �ʱ�ȭ! ù ��° �������� ������ �ǹ��Ѵ�.
        *pdata = plist->arr[0]; // LFirst �Լ��� ������ ù �����͸� ����ϴ� 0 ���� ����� �����Ͽ��� �������.
        return 1;
    }
}
int LNext(List* plist, LData* pdata)		// �� ��° ���� ������ ����
{
    if (plist->curPosition >= (plist->numOfData) - 1) {
        return 0;
    }
    else {
        (plist->curPosition)++;
            (*pdata) = plist->arr[plist->curPosition];
        return 1;
    }
}

LData LRemove(List* plist)					// ������ ������ ����
{
    if (plist->numOfData == 0) {
        printf("������ �����Ͱ� �����ϴ�.");
        return;
    }
    int rpos = plist->curPosition;      // ������ �������� �ε��� �� ����
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    // ������ ���� �������� �̵��� �����ϴ� �ݺ���
    for (i = rpos; i < num - 1; i++)
        plist->arr[i] = plist->arr[i + 1];

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}
int LCount(List* plist) {						// ����� �������� �� ��ȯ
    return (plist->numOfData);
}