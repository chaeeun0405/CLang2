#include <stdio.h>

//최댓값과 그거의 인덱스 출력
int main() {
	int n[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
	}

	int max = n[0];
	int num = 1;

	for (int i = 0; i < 9; i++) {
		if (n[i] > max) {
			max = n[i];
			num = i + 1;
		}
	}

	printf("%d\n%d", max, num);

	return 0;
}