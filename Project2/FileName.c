#include <stdio.h>

// N���� �ٱ���. 
// M�� ���ֱ�
// i�� �ٱ��Ϻ��� j�� �ٱ��ϱ��� k���� ���� ���� ����

int main() {
	int N, M, i, j, k;
	int ball[101] = { 0 };
	scanf("%d %d", &N, &M);

	//M�� ������ 
	for (int a = 0; a < M; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int c = i; c <= j; c++) {
			ball[c-1] = k; //�ٱ��ϴ� 1���� �����ε� �ε����� 0���� �����̴ϱ�
		}
	}

	//�ٱ��� N�� ���
	for (int a = 0; a < N; a++) {
		printf("%d ", ball[a]);
	}

	return 0;
}
