#include <stdio.h>
 
int main() {
	short a, b, c;
	short* ap;
	*&a = 5; // a = 5
	ap = &b; 
	*ap = a; // b�� �� = 5
	*ap += 2; // b�� �� = 5 + 2
	a = a + *ap; //a�� �� = 5 + 7
	**&ap += 3; //b�� �� = 7 + 3
	c = a + b; // 10 + 12 = 22
	printf("%d\n", c);
}