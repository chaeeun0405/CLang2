#include <stdio.h>

//���� �ٸ� �������� ���� ã��

int main() {
	int n, sum = 0;
	int N[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		N[i] = (n % 42); //�������� �迭�� �Ҵ�
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (N[i] == N[j]) { // ��ġ�� ���ڰ� �ִ� = ���� �ٸ� �������� ������ ������
				count += 1;
			}
		}
		if (count == 0) { // = ��ġ�� ���ڰ� ���� = ���� �ٸ� ������ ����(=sum+ +1
			sum += 1;
		}
	}
	printf("%d", sum);

	return 0;
