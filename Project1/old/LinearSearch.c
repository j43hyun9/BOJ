#include <stdio.h>

void LSearch() {
	int target = 0;
	int arr[] = { 1,2,5,7,8,2,5,9,20 };
	printf("ã�� ���ڸ� �Է��Ͻÿ�.");
	scanf_s("%d", &target);
	target = LinearSearch(arr, target, sizeof(arr)/sizeof(int));

	printf("ã�� ���� %d �ε����� �ִ�.", target);

}

int LinearSearch(int arr[], int target, int len) {
	
	for (int i = 0; i < len; i++) {
		if (arr[i] == target)
			return i+1;
	}
	
	return -1;
}