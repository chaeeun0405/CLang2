#include <stdio.h> 

//10��: ������ ���� ���ﰢ�� ������� n��¥�� �� ���
int main() {
	int n, i, j, k;
	scanf("%d", &n);
	//n���� �� ���
	for (i=1;i<=n;i++) {
		//���� ��� (������ n-1����)
		for (j=i;j<n;j++) {
			printf(" ");
		}
		//�� ��� (���� i������ �Ȱ���)
		for (k=1;k<=i;k++) {
			printf("*");
		}
		//�ٹٲ� & ������ ��¿��� �ٹٲ� �ȵǰ�..
		if (i != n) {
			printf("\n");
		}
		else {
			break;
		}
	}
	return 0;
}


