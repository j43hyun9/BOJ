#include "ArrayList.h"


void ListInit(List* plist)					// 초기화
{
    (plist->numOfData) = 0;     // 리스트에 저장된 데이터의 수는 0!
    (plist->curPosition) = -1;  // 현재 아무 위치도 가리키지 않음 !
}

void LInsert(List* plist, LData data)		// 데이터 저장
{
    if (plist->numOfData >= LIST_LEN) {
        printf("더 이상 저장할 공간이 없습니다.");
        return;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;

}

int LFirst(List* plist, LData* pdata)		// 첫 데이터 참조
{
    if (plist->numOfData == 0) { // 저장된 데이터가 하나도 없다면 당연히 참조도 못한다.
        return 0;
    }
    else {
        (plist->curPosition) = 0;   // 참조 위치 초기화! 첫 번째 데이터의 참조를 의미한다.
        *pdata = plist->arr[0]; // LFirst 함수의 취지는 첫 데이터를 취득하니 0 으로 상수를 고정하여도 상관없다.
        return 1;
    }
}
int LNext(List* plist, LData* pdata)		// 두 번째 이후 데이터 참조
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

LData LRemove(List* plist)					// 참조한 데이터 삭제
{
    if (plist->numOfData == 0) {
        printf("삭제할 데이터가 없습니다.");
        return;
    }
    int rpos = plist->curPosition;      // 삭제할 데이터의 인덱스 값 참조
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    // 삭제를 위한 데이터의 이동을 진행하는 반복문
    for (i = rpos; i < num - 1; i++)
        plist->arr[i] = plist->arr[i + 1];

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}
int LCount(List* plist) {						// 저장된 데이터의 수 반환
    return (plist->numOfData);
}