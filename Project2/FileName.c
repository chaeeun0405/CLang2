#include <stdio.h> 

//11번: T를 입력받지 않고도 입력받은 게 T줄이면 T줄만큼 A+B를 출력, 마지막엔 항상 A==0 B==0

int main() {
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		printf("%d\n", A + B);
	}
	return 0;
}
