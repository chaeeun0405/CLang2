#include <stdio.h>
#include<string.h>

int main() {
	char M[] = { 'P', 'A', 'E', NULL };
	char* ap;
	int a = 0;
	ap = M + strlen(M) - 1; // ap = M + (3-1) = M + 2
	printf("%c\n", *ap--); // M+2�� ������ ��� & �������� ap = M + 1
	*--ap = 'T'; //��������, ap = M , M�� �������� �ڸ� P > T
	printf("%s\n", ap); //���ڿ��� ����ϴ� %s, TAE ���.
	printf("%c\n", *++ap); // M+1�� ������ A
	printf("%c\n", ap[a++]); //ap[0] ��� (=A), �������� a = 1
	printf("%c\n", ap[--a]); //��������, a = 0 , ap[0] ���
}
