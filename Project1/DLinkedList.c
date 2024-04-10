//#include <stdio.h>
//#include "DLinkedList.h"
//void ListInit(List* plist) {
//	plist->head = (Node*)malloc(sizeof(Node));		// ���� ����� ����
//	plist->head->next = NULL;
//	plist->comp = NULL;
//	plist->numOfData = 0;
//}
//
//void LInsert(List* plist, LData data) {
//	if (plist->comp == NULL)		// ���ı����� ���õ��� �ʾҴٸ�,
//		FInsert(plist, data);			// �Ӹ��� ��带 �߰��Ѵ�.
//	else
//		SInsert(plist, data);			// ���� ������ ���õǾ��ٸ�, ���ı��ؿ� �ٰ��Ͽ� ��带 �߰����ش�.
//}
//
//int LFirst(List* plist, LData* pdata) {
//	if (plist->head->next == NULL)		// ���� ��尡 NULL�� ����Ų�ٸ�,
//		return FALSE;								// ��ȯ�� �����Ͱ� ����!
//
//	plist->before = plist->head;		// before�� ���� ��带 ����Ű�� ��
//	plist->cur = plist->head->next;	// cur�� ù ���� ��带 ����Ű�� ��
//
//	*pdata = plist->cur->data;			//ù ���� ����� �����͸� ����
//
//	return TRUE;								// ������ ��ȯ ����!
//}
//
//int LNext(List* plist, LData* pdata) {
//	if (plist->cur->next == NULL) {		// cur�� NULL�� ����Ų�ٸ�,
//		return FALSE;								// ��ȯ�� �����Ͱ� ����!
//	}
//
//	plist->before = plist->cur;		// cur�� ����Ű�� ���� beofore�� ����Ŵ
//	plist->cur = plist->cur->next; // cur�� �� ���� ��带 ����Ŵ
//
//	*pdata = plist->cur->data;		// cur�� ����Ű�� ����� ������ ����
//	return TRUE;							// ������ ��ȯ ����!
//	// �� cur�� �̿��ؼ� ��� �����͸� �����ϰ� �ȴ�.
//}
//
//LData LRemove(List* plist) {
//	Node* rpos = plist->cur;		// �Ҹ� ����� �ּ� ���� rpos �� ���� remove + position ������ �ڸ�
//	LData rdata = rpos->data;	// �Ҹ� ����� �����͸� rdata�� �����Ѵ�.
//
//	plist->before->next = plist->cur->next;		// �Ҹ� ����� ����Ʈ���� �����Ѵ�.
//	plist->cur = plist->before;							// cur�� ����Ű�� ��ġ�� �������Ѵ�.
//
//	free(rpos);											//����Ʈ���� ���ŵ� ��带 �޸𸮿��� Ǯ���ش�.
//	(plist->numOfData)--;						// ����� �������� �� �ϳ� ����
//	return rdata;										// ���ŵ� ����� ������ ��ȯ
//}
//
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}
