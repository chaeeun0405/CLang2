#include <stdio.h>


// ������ ���� ã��
int main() {
	int N, V, sum=0;
	int num[101];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	scanf("%d", &V);

	for (int i = 0; i < N; i++) {
		if (num[i] == V) {
			sum += 1;
		}
	}

	printf("%d", sum);

	return 0;
}