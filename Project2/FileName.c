#include <stdio.h>
 
int main() {
	short a, b, c;
	short* ap;
	*&a = 5; // a = 5
	ap = &b; 
	*ap = a; // b의 값 = 5
	*ap += 2; // b의 값 = 5 + 2
	a = a + *ap; //a의 값 = 5 + 7
	**&ap += 3; //b의 값 = 7 + 3
	c = a + b; // 10 + 12 = 22
	printf("%d\n", c);
}