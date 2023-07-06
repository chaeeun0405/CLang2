#include <stdio.h>

//서로 다른 나머지의 개수 찾기

int main() {
	int n, sum = 0;
	int N[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		N[i] = (n % 42); //나머지를 배열에 할당
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (N[i] == N[j]) { // 겹치는 숫자가 있다 = 서로 다른 나머지의 개수에 미포함
				count += 1;
			}
		}
		if (count == 0) { // = 겹치는 숫자가 없다 = 서로 다른 나머지 개수(=sum+ +1
			sum += 1;
		}
	}
	printf("%d", sum);

	return 0;
