#include <stdio.h>

// N개의 바구니. 
// M번 공넣기
// i번 바구니부터 j번 바구니까지 k번이 적힌 공을 넣음

int main() {
	int N, M, i, j, k;
	int ball[101] = { 0 };
	scanf("%d %d", &N, &M);

	//M번 공넣음 
	for (int a = 0; a < M; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int c = i; c <= j; c++) {
			ball[c-1] = k; //바구니는 1부터 시작인데 인덱스는 0부터 시작이니까
		}
	}

	//바구니 N개 출력
	for (int a = 0; a < N; a++) {
		printf("%d ", ball[a]);
	}

	return 0;
}
