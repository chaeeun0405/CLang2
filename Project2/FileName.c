#include <stdio.h> 

//05��: 4����Ʈ�� long �ϳ���. n����Ʈ�� long x n int�� ���

int main() {
	int n, i;
	scanf("%d", &n);
	int num = n / 4;
	for (i=0;i<num;i++) {
		printf("long ");
	}
	printf("int");
	return 0;
}

