#include <stdio.h> 

//05번: 4바이트당 long 하나씩. n바이트를 long x n int로 출력

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

