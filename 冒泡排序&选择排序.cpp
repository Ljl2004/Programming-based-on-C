#include <stdio.h>

void BubbleSort(int arr[], int len) {
	int i, j, temp;
	for ( i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void SelectionSort(int arr[], int len) {
	int i, j, temp;
	for (i = 0 ; i < len - 1 ; i++) {
		int min = i;                  // ��¼��Сֵ����һ��Ԫ��Ĭ����С
		for (j = i + 1; j < len; j++) {   // ����δ�����Ԫ��
			if (arr[j] < arr[min]) {  // �ҵ�Ŀǰ��Сֵ
				min = j;    // ��¼��Сֵ
			}
		}
		if (min != i) {
			temp = arr[min]; // ������������
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main() {
	int a[5] = {4, 2, 6, 1, 5};

	BubbleSort(a, 5);
	for (int i = 0; i < 5; i++) {
		printf("%2d", a[i]);
	}
	printf("\n");

	SelectionSort(a, 5);
	for (int i = 0; i < 5; i++) {
		printf("%2d", a[i]);
	}
	printf("\n");

	return 0;
}
