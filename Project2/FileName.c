#include <stdio.h>

//�ٽ� ���� ����
int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 }; //2����
	
	//arr[0] = (int*)malloc(sizeof(int) * 10); //��Ұ� 10���� int�� �迭�� �Ҵ��ϴ� �ڵ�
	//for (int i = 0; i < 10; i++) {
	//	arr[0][i] = i;
	//}
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", arr[0][i]);
	//}
  
	printf("%d \n", **arr); //10
	printf("%d \n", **(arr + 1)); //2���� + 1������ ����ĭ (����ĭ�� ���� ���� ����), 20
	printf("%d \n", *arr); //num�� �ּҰ�
	printf("%d \n", *(*arr + 1)); //(&num1 (�ּҰ�) + 1) �� �������̶� ���� �̻���
	printf("%d \n", **(arr + 2)); //30
	
	//printf("%d %d %d", &num1, arr[0], arr);
}
