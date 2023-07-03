#include <stdio.h> 

//별 찍기 1: N 입력받고 (N*2-1)줄만큼 마름모 꼴로 출력
int main() {
	int N, i, k, j, t=1;
	scanf("%d", &N);
	//줄 찍기
	for (i=1;i<=N*2-1;i++) {

		//마름모 윗 덩어리 (제일 긴 줄 포함)
		if (i <= N) {
			//왼쪽 공백, N-1부터 0까지 출력되게 하기
			int a = N - i;
			while (a != 0) {
				a--;
				printf(" ");
			}
			//별, 1+2(i-1)개 씩 증가
			for (k = 0; k < (1 + 2 * (i - 1)); k++) {
				printf("*");
			}
		printf("\n");
		}
		//마름모 밑 덩어리
		else if(i > N) { //i는 N+1로 시작해서 N+2, N+3... 상태, N은 N이고  1+2(N-j) i=6 n=5
			//왼쪽 공백
			int c = i - N;
			while (c != 0) {
				c--;
				printf(" ");
			}
			//별
			for (j = 1;j <= (N*2-(1+2*t));j++) {
				printf("*");
			}
		t = t + 1;
		printf("\n");
		}
	}
	return 0;
}