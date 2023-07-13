#include <stdio.h>

int main() {

	short M[] = { 10, 20, 30, 40 }; //일차원 배열~
	short* ap; 
	short c;
	ap = M; 
	c = *ap++; // c = 10 , ap = M+1

	////전위연산(++--~~): 전위연산 후 문장실행 
	////후위연산(~~++--): 문장실행 후 후위연산 실행

	c += *(ap + 1); //c = 10 + 30 = 40
	c += *++ap; //++ 먼저 해서 M+1-> M+2, (ap = M+2) c = 40 + 30 = 70
	printf("%d %d\n", c, *ap); //70, 30

	c += ap[1]--; // c = 70 + 40, 후위연산으로 ap[1]의 값을 - 1 해줌 (40 > 39)
	c += ap[1]; // c = 110 + 39 = 149
	printf("%d %d\n", c, ap[1]); //149, 39
}