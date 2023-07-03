#include <stdio.h> 

//03번: 1부터 n까지의 합

int main() {
	int n, i, sum=0;
	scanf("%d", &n);

	for (i=1;i<=n;i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
