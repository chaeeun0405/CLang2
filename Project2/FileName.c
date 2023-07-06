#include <stdio.h>

// N개의 바구니. 
// 바구니 번호와 같은 숫자의 공
// M번 공 바꿈
// 바구니 2개 골라서 서로 바꿈

int main() {
	int N, M, i, j;
	int ball[100];
	scanf("%d %d", &N, &M);
	
	for (int a = 0; a < N; a++) {          //바구니에 자기 숫자 공 넣어주기
		ball[a] = a + 1;      //공은 1번부터
	}

	for (int a = 0; a < M ; a++) {          //공 바꾸기
		scanf("%d %d", &i, &j);
		int A = ball[i-1];
		int B = ball[j-1];
		ball[i-1] = B;
		ball[j-1] = A;
	}
	for (int a = 0; a < N; a++) {
		printf("%d ", ball[a]);
	}

	return 0;
}