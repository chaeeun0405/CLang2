#include <stdio.h>

//��ȣ �� �Ҹ� ��� ã��
int main() {
	int n;
	int stu[30] = { 0 };

	//���� �� ��ȣ
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		stu[n - 1] = n;
	}

	for (int i = 0; i < 30; i++) {
		if (stu[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}