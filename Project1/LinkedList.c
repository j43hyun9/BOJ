#include <stdio.h>
#include "Linked.h"

void ListInit(List* plist);

void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);

int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);

int LCount(List* plist);

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));
