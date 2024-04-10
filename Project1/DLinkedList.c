//#include <stdio.h>
//#include "DLinkedList.h"
//void ListInit(List* plist) {
//	plist->head = (Node*)malloc(sizeof(Node));		// 더미 노드의 생성
//	plist->head->next = NULL;
//	plist->comp = NULL;
//	plist->numOfData = 0;
//}
//
//void LInsert(List* plist, LData data) {
//	if (plist->comp == NULL)		// 정렬기준이 마련되지 않았다면,
//		FInsert(plist, data);			// 머리에 노드를 추가한다.
//	else
//		SInsert(plist, data);			// 정렬 기준이 마련되었다면, 정렬기준에 근거하여 노드를 추가해준다.
//}
//
//int LFirst(List* plist, LData* pdata) {
//	if (plist->head->next == NULL)		// 더미 노드가 NULL을 가리킨다면,
//		return FALSE;								// 반환할 데이터가 없다!
//
//	plist->before = plist->head;		// before는 더미 노드를 가리키게 함
//	plist->cur = plist->head->next;	// cur은 첫 번쨰 노드를 가리키게 함
//
//	*pdata = plist->cur->data;			//첫 번쨰 노드의 데이터를 전달
//
//	return TRUE;								// 데이터 반환 성공!
//}
//
//int LNext(List* plist, LData* pdata) {
//	if (plist->cur->next == NULL) {		// cur이 NULL을 가리킨다면,
//		return FALSE;								// 반환할 데이터가 없다!
//	}
//
//	plist->before = plist->cur;		// cur이 가리키던 것을 beofore가 가리킴
//	plist->cur = plist->cur->next; // cur은 그 다음 노드를 가리킴
//
//	*pdata = plist->cur->data;		// cur이 가리키는 노드의 데이터 전달
//	return TRUE;							// 데이터 반환 성공!
//	// 즉 cur을 이용해서 모든 데이터를 참조하게 된다.
//}
//
//LData LRemove(List* plist) {
//	Node* rpos = plist->cur;		// 소멸 대상의 주소 값을 rpos 에 저장 remove + position 삭제할 자리
//	LData rdata = rpos->data;	// 소멸 대상의 데이터를 rdata에 저장한다.
//
//	plist->before->next = plist->cur->next;		// 소멸 대상을 리스트에서 제거한다.
//	plist->cur = plist->before;							// cur이 가리키는 위치를 재조정한다.
//
//	free(rpos);											//리스트에서 제거된 노드를 메모리에서 풀어준다.
//	(plist->numOfData)--;						// 저장된 데이터의 수 하나 감소
//	return rdata;										// 제거된 노드의 데이터 반환
//}
//
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}
