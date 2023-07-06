#include <stdio.h>

//수열 A에서 X보다 작은 수를 모두 출력
int main() {
	int N, X; 수열 A에서 X보다 작은 수를 모두 출력
	int A[10000];
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			printf("%d ", A[i]);
		}
	}

	return 0;
}