#include <stdio.h>

void LSearch() {
	int target = 0;
	int arr[] = { 1,2,5,7,8,2,5,9,20 };
	printf("찾는 숫자를 입력하시오.");
	scanf_s("%d", &target);
	target = LinearSearch(arr, target, sizeof(arr)/sizeof(int));

	printf("찾는 값은 %d 인덱스에 있다.", target);

}

int LinearSearch(int arr[], int target, int len) {
	
	for (int i = 0; i < len; i++) {
		if (arr[i] == target)
			return i+1;
	}
	
	return -1;
}