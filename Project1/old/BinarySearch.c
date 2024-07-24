#include <stdio.h>
int* SelSort(int* num, int len) {
    int min, index, temp, i, j;

    for (i = 0; i < len; i++) {
        min = num[i];
        index = i;

        for (j = i + 1; j < len; j++) {
            if (num[j] < min) {
                min = num[j];
                index = j;
            }
        }

        temp = num[i];
        num[i] = num[index];
        num[index] = temp;
    }

    return num;
}



int BSearch(int arr[], int len, int target, int mid) {
    int left = 0;
    int right = len-1;

    if (target == arr[mid])
        return mid;
    else if (target > arr[mid]) {
        left = mid+1;
    }
    else if (target < arr[mid]) {
        right = mid-1;
    }
    
    return BSearch(arr, len, target, (left + right) / 2);

}

void mmkmk() {

    int arr[] = { 8,9,7,6,5 };
    int* parr;
    int target = 0;
    parr = SelSort(arr, sizeof(arr)/sizeof(int));

    printf("�����迭 arr[ ");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d, ", arr[i]);
    }
    printf("] �߿��� \n");
    printf("ã�� ���� �Է��Ͻʽÿ�: ");
    scanf_s("%d", &target);
    
    int SearchNumber = BSearch(parr, sizeof(arr) / sizeof(int), target, sizeof(arr) / sizeof(int) / 2);

    printf("\nã�� ���� %d �� �ε����� �ֽ��ϴ�.", SearchNumber);
}