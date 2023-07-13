#include <stdio.h>

//다시 복습 ㅎㅎ
int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 }; //2차원
	
	//arr[0] = (int*)malloc(sizeof(int) * 10); //요소가 10개인 int형 배열을 할당하는 코드
	//for (int i = 0; i < 10; i++) {
	//	arr[0][i] = i;
	//}
	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", arr[0][i]);
	//}
  
	printf("%d \n", **arr); //10
	printf("%d \n", **(arr + 1)); //2차원 + 1이지만 다음칸 (다음칸이 다음 차원 판정), 20
	printf("%d \n", *arr); //num의 주소값
	printf("%d \n", *(*arr + 1)); //(&num1 (주소값) + 1) 의 참조값이라 값이 이상함
	printf("%d \n", **(arr + 2)); //30
	
	//printf("%d %d %d", &num1, arr[0], arr);
}
