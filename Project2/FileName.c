#include <stdio.h>

int main() {
	//3x3 �迭�� ���� �ƹ��� ���� �Ҵ�
	int i, k;
	int n[3][3];
	for (i=0;i<3;i++) {
		for (k=0;k<3;k++) {
			n[i][k] = i * k;
		}
	}
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d", n[i][k]);
		}
		printf("\n");
	}
		     
}