#include <stdio.h>


int main() {
	int i;
	int n[50] = { 0, 1, 2 }; //�ڿ� �����Ⱚ ����,, ������ �迭�� NULL ����!
	for (i = 0; i < 50; i++) {
		printf("%d", n[i]);
	}
}