#include <stdio.h>

//2. char Name[4] = { 'A', 'B', 'C',NULL };
//char Chocolate[11] = { ' ', 'C', 'H', 'O', 'C', 'O', 'L', 'A', 'T', 'E', NULL };
//�迭�� �ִ�. ABC CHOCOLATE�� ��µǵ��� NAME�� ����Ͽ� ����϶�
//�� �迭�� �ּҰ� 36�� ���� ��

int main() {

	char Name[4] = { 'A', 'B', 'C', NULL };
	char Chocolate[11] = { ' ', 'C', 'H', 'O', 'C', 'O', 'L', 'A', 'T', 'E', NULL };
	char* pN = Name;
	printf("%s", Name);
	printf("%s", Name+36); //�ּҿ� 36�� ����, 36ĭ ������ ��.

}