#include <stdio.h>

//2. char Name[4] = { 'A', 'B', 'C',NULL };
//char Chocolate[11] = { ' ', 'C', 'H', 'O', 'C', 'O', 'L', 'A', 'T', 'E', NULL };
//배열이 있다. ABC CHOCOLATE이 출력되도록 NAME만 사용하여 출력하라
//두 배열의 주소가 36씩 차이 남

int main() {

	char Name[4] = { 'A', 'B', 'C', NULL };
	char Chocolate[11] = { ' ', 'C', 'H', 'O', 'C', 'O', 'L', 'A', 'T', 'E', NULL };
	char* pN = Name;
	printf("%s", Name);
	printf("%s", Name+36); //주소에 36을 더함, 36칸 앞으로 감.

}