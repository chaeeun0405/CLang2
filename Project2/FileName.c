#include <stdio.h> 

//�� ��� 1: N �Է¹ް� (N*2-1)�ٸ�ŭ ������ �÷� ���
int main() {
	int N, i, k, j, t=1;
	scanf("%d", &N);
	//�� ���
	for (i=1;i<=N*2-1;i++) {

		//������ �� ��� (���� �� �� ����)
		if (i <= N) {
			//���� ����, N-1���� 0���� ��µǰ� �ϱ�
			int a = N - i;
			while (a != 0) {
				a--;
				printf(" ");
			}
			//��, 1+2(i-1)�� �� ����
			for (k = 0; k < (1 + 2 * (i - 1)); k++) {
				printf("*");
			}
		printf("\n");
		}
		//������ �� ���
		else if(i > N) { //i�� N+1�� �����ؼ� N+2, N+3... ����, N�� N�̰�  1+2(N-j) i=6 n=5
			//���� ����
			int c = i - N;
			while (c != 0) {
				c--;
				printf(" ");
			}
			//��
			for (j = 1;j <= (N*2-(1+2*t));j++) {
				printf("*");
			}
		t = t + 1;
		printf("\n");
		}
	}
	return 0;
}