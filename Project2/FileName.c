#include <stdio.h>

int main() {
	//�� �� ��
		int *pa; //int�� ������ ���� pa ����
		int n = 3;
		pa = &n; //pa�� n�� �ּ� ����
		printf("%d\n", n); //n�� ��
		printf("%d\n", *pa); //n�� �� (�ּ�(pa)�� ����Ű��(*) ���� �����~)
		printf("%d\n", pa); //n�� �ּ�
		printf("%d\n", &n); //n�� �ּ�

}