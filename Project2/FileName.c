#include <stdio.h>

//���� ����
//���� �� �ִ� M
//��� ������ ����/M*100 ��
//���� �� ���� ���� N
 
int main() {
	float N, sum=0.0;
	scanf("%f", &N);
	float s[1000];

	for (int i = 0; i < N; i++) {
		scanf("%f", &s[i]);
	}

	float max = s[0];

	for (int i = 0; i < N; i++) {
		if (s[i] > max) {
			max = s[i];
		}
	}

	for (int i = 0; i < N; i++) {
			s[i] = (float)s[i] / (float)max * 100;
	
	}

	for (int i = 0; i < N; i++) {
		sum += s[i];
	}

	printf("%.14f", (float)sum / (float)N);
}