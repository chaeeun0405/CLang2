#include <stdio.h>

//�ִ񰪰� �װ��� �ε��� ���
int main() {
	int n[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
	}

	int max = n[0];
	int num = 1;

	for (int i = 0; i < 9; i++) {
		if (n[i] > max) {
			max = n[i];
			num = i + 1;
		}
	}

	printf("%d\n%d", max, num);

	return 0;
}