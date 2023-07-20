#include <stdio.h>

void cal(int* a, int* b);

int main() {
	int a = 10, b = 5;
	printf("main �Լ��� a b %d %d\n", &a, &b);
	printf("%d\n", calc(a, b));
	cal(&a, &b);
}

void cal(int* a, int* b) { //call by address, ���� a���� ����
	*a = 2 * (*a) + (*b);
	printf("address �Լ��� a b:%d %d", &a, &b);
}

int calc(int a, int b) { //call by value, ���� ����(���� a�� ���� X)
	a = 2 * a;
	printf("value �Լ��� a b: %d %d\n", &a, &b);
	return a + b;
}

//call by value/address�� ���� �Լ��� �θ� �Լ��� ������ ���� �ٸ�! ������ �ٸ��� add, ������ ������ value
//
//
//�Լ��� ���� ������ ����
//������ ���� ���߿� ���� �� ���� ���� ������ (������) ����
//ex. �Ҹ��� ���� A B C�� ������ ���� C B A 