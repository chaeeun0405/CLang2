#include <stdio.h>

int main() {
	long M[3] = { 10, 20, 30 };
	long K;
	K = *M + M[1] + *(M + 1); //* > ÂüÁ¶°ª
	K += *&M[2] + *M + 1;
	printf("%d\n %d", K, M[3]);

}