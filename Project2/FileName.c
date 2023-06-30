
#include <stdio.h> 
//별 찍기 2: 별 찍기 1에서 오른쪽에 별을 0 1 2 3 ... n-2 n-1 n-2 . . . 0개씩 추가
int main() {
	int n, i, k, j, t = 1;
	scanf("%d", &n);
	for (i = 1; i <= n * 2 - 1; i++) {

		if (i <= n) {
			int a = n - i;
			while (a != 0) {
				a--;
				printf(" ");
			}
			for (k = 0; k < (1 + 2 * (i - 1)+(i-1)); k++) { //위 코드에서 + (i-1) 만 추가함 (여기서 i-1이란,, 0부터 시작해서 1씩 커지는 숫자, 0 1 2 3 . . . n-1)
				printf("*");
			}
			printf("\n");
		}
		else if (i > n) {
			int c = i - n;
			while (c != 0) {
				c--;
				printf(" ");
			}
			for (j = 1; j <= (n * 2 - (1 + 2 * t) + (n-t-1)); j++) { //위 코드에서 + (n-t-1) 만 추가함 (이게 n-2랑 똑같은 거, n-2 n-3 . . . 0)
				printf("*");
			}
			t = t + 1;
			printf("\n");
		}
	}
	return 0;
}
