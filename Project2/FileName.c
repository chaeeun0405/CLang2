#include <stdio.h> 

//03��: 1���� n������ ��

int main() {
	int n, i, sum=0;
	scanf("%d", &n);

	for (i=1;i<=n;i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
