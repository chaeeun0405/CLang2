#include <stdio.h> 

//11��: T�� �Է¹��� �ʰ� �Է¹��� �� T���̸� T�ٸ�ŭ A+B�� ���, �������� �׻� A==0 B==0

int main() {
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		printf("%d\n", A + B);
	}
	return 0;
}
