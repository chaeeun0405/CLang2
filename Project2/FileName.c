#include <stdio.h> 

//10번: 오른쪽 정렬 직삼각형 모양으로 n줄짜리 별 찍기
int main() {
	int n, i, j, k;
	scanf("%d", &n);
	//n개의 줄 출력
	for (i=1;i<=n;i++) {
		//공백 출력 (공백은 n-1개씩)
		for (j=i;j<n;j++) {
			printf(" ");
		}
		//별 출력 (별은 i개수랑 똑같이)
		for (k=1;k<=i;k++) {
			printf("*");
		}
		//줄바꿈 & 마지막 출력에는 줄바꿈 안되게..
		if (i != n) {
			printf("\n");
		}
		else {
			break;
		}
	}
	return 0;
}


