#include <stdio.h>
#include<string.h>

int main() {
	char M[] = { 'P', 'A', 'E', NULL };
	char* ap;
	int a = 0;
	ap = M + strlen(M) - 1; // ap = M + (3-1) = M + 2
	printf("%c\n", *ap--); // M+2의 참조값 출력 & 후위연산 ap = M + 1
	*--ap = 'T'; //전위연산, ap = M , M의 참조값의 자리 P > T
	printf("%s\n", ap); //문자열을 출력하는 %s, TAE 출력.
	printf("%c\n", *++ap); // M+1의 참조값 A
	printf("%c\n", ap[a++]); //ap[0] 출력 (=A), 후위연산 a = 1
	printf("%c\n", ap[--a]); //전위연산, a = 0 , ap[0] 출력
}
