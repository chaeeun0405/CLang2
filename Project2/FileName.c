#include <stdio.h>

int main() {
	//포 인 터
		int *pa; //int형 포인터 변수 pa 선언
		int n = 3;
		pa = &n; //pa에 n의 주소 대입
		printf("%d\n", n); //n의 값
		printf("%d\n", *pa); //n의 값 (주소(pa)가 가리키는(*) 값을 출력해~)
		printf("%d\n", pa); //n의 주소
		printf("%d\n", &n); //n의 주소

}