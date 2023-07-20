#include <stdio.h>

void cal(int* a, int* b);

int main() {
	int a = 10, b = 5;
	printf("main 함수의 a b %d %d\n", &a, &b);
	printf("%d\n", calc(a, b));
	cal(&a, &b);
}

void cal(int* a, int* b) { //call by address, 원래 a값에 영향
	*a = 2 * (*a) + (*b);
	printf("address 함수의 a b:%d %d", &a, &b);
}

int calc(int a, int b) { //call by value, 값을 복사(원래 a에 영향 X)
	a = 2 * a;
	printf("value 함수의 a b: %d %d\n", &a, &b);
	return a + b;
}

//call by value/address는 메인 함수와 부른 함수의 차원에 따라 다름! 차원이 다르면 add, 차원이 같으면 value
//
//
//함수는 스택 구조로 동작
//스택은 가장 나중에 들어온 게 가장 빨리 나가는 (끝나는) 구조
//ex. 불리는 순서 A B C면 끝나는 순서 C B A 