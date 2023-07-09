#include <stdio.h>


int main() {
	char M[] = { 'A' , 'B' , 'C', 'D' };
	int N = sizeof(M);
	printf("%d", N);
	int a;
	*&M[0] += 32; //아스키코드 참고 
	*(M + 1) += 1;
	++*(M + 2);
	*(M + 3) += 2;
	for (a = 0; a < N; a++)
		putchar(*(M + a));
}
