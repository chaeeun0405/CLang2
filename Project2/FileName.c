#include <stdio.h>

// N���� �ٱ���. 
// �ٱ��� ��ȣ�� ���� ������ ��
// M�� �� �ٲ�
// �ٱ��� 2�� ��� ���� �ٲ�

int main() {
	int N, M, i, j;
	int ball[100];
	scanf("%d %d", &N, &M);
	
	for (int a = 0; a < N; a++) {          //�ٱ��Ͽ� �ڱ� ���� �� �־��ֱ�
		ball[a] = a + 1;      //���� 1������
	}

	for (int a = 0; a < M ; a++) {          //�� �ٲٱ�
		scanf("%d %d", &i, &j);
		int A = ball[i-1];
		int B = ball[j-1];
		ball[i-1] = B;
		ball[j-1] = A;
	}
	for (int a = 0; a < N; a++) {
		printf("%d ", ball[a]);
	}

	return 0;
}