#pragma once
#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE	1
#define FALSE 0

typedef int LData;

typedef struct _node {
	LData data; // 데이터를 저장하는 영역임
	struct _node * next;
}Node;

typedef struct _linkedList
{
	Node* head; // 포인터 구조체 변수는 내부적으로 공간을 받지는 않고 주소값을 참조하기 위해서만 존재함.
	Node* cur; 
	Node* before;
	int numOfData;
	int (*comp)(LData d1, LData d2); // 포인터함수임 변수에 함수를 할당시킴 자바에서 비슷한건 메서드 참조? 정도일듯

}LinkedList;

typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);
void FInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

void SetSortRule(List* plist, int(*comp)(LData d1, LData d2));
#endif

