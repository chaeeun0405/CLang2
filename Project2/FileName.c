#include <stdio.h> 


//문자형, 문자열, 정수형 배열의 차이점
//int main() {
//   /* int i;
//    int n[50] = { 0, 1, 2 }; //뒤에 쓰레기값 나옴,, 정수형 배열은 NULL 없음!
//    for (i=0;i<50;i++) {
//        printf("%d", n[i]);
//    }*/
//
//    char n[6] = {'a' , 'b' , 'c' , NULL}; //3개 찍고 멈춰
//    int i;
//    //for (i = 0; i < 6; i++) {
//    //    scanf("%d", &n[i]);
//    //}
//    for (i = 0; i < 6; i++) {
//        printf("%c", n[i]);
//    }
//    printf("%s", n); //%s = str,, 배열의 맨 앞에서부터 NULL까지 출력 
//}

////2차원 배열??
//int main() {
//	int num[3][3] //3x3 행렬
//	// 행 : num[0][n]
//	//>행	// (0,0) (0,1) (0,2)
//		    // (1,0) (1,1) (1,2)
//	    	// (2,0) (2,1) (2,2) 
//			
//		    // ^열 num[n][0]
//
//
//	//num = num[0][0] = num[0] : 0행 / 배열 주소= 배열 이름=맨 앞 칸 주소
//


////포 인 터
//
//int main() {
//		int *pa;
//		int n = 3;
//		pa = &n;
//		printf("%d\n", n); //n의 값
//		printf("%d\n", *pa); //n의 값 (주소(pa)가 가리키는(*) 값을 출력해~)
//		printf("%d\n", pa); //n의 주소
//		printf("%d\n", &n); //n의 주소
//	}
//

//int main() {
//	int* p;
//	int num[6] = { 1,2,3,4 };
//	p = num;
//	printf("%d ", p);
//	p++;
//	printf("%d ", p);
//	p++;
//	printf("%d ", p);
//}

//동적 배열
//?

//정적 배열
//방금 한 거

	/*char name[3][100];
	name[0] = "apple";
	name[1] = "banana";
	name[2] = "cat";*/

//3x3 배열을 만들어서 값을 할당하고 최솟값 찾기
//int main() {
//	int i, k;
//	int n[3][3];
//	for (i=0;i<3;i++) {
//		for (k=0;k<3;k++) {
//			n[i][k] = i * k;
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		for (k = 0; k < 3; k++) {
//			printf("%d", n[i][k]);
//		}
//		printf("\n");
//	}
//		       
//}   

int main() {
    int num[3][3];
    for (int i = 0; i < 9; i++) {
        num[i / 3][i % 3] = i;
        printf("%d", num[i / 3][i % 3]);
    }
    for (int i = 0; i < 9; i++)
        printf("%d", num[i / 3][i % 3]);
}