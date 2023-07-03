#include <stdio.h>


int main() {
	int i;
	int n[50] = { 0, 1, 2 }; //뒤에 쓰레기값 나옴,, 정수형 배열은 NULL 없음!
	for (i = 0; i < 50; i++) {
		printf("%d", n[i]);
	}
}