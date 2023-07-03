#include <stdio.h> 

//06번: A+B를 T줄 만큼 입력 및 출력
int main() {
	int T, i, A, B;
	scanf("%d", &T);
	for (i=0;i<T;i++) {
		scanf("%d %d", &A , &B);
		printf("%d\n", A + B);
	}
	return 0;
}

