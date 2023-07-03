#include <stdio.h>

int main() {
		int* p;
		int num[6] = { 1,2,3,4 };
		p = num;
		printf("%d ", p);
		p++;
		printf("%d ", p);
		p++;
		printf("%d ", p);
}