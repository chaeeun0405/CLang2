#include <stdio.h> 


//������, ���ڿ�, ������ �迭�� ������
//int main() {
//   /* int i;
//    int n[50] = { 0, 1, 2 }; //�ڿ� �����Ⱚ ����,, ������ �迭�� NULL ����!
//    for (i=0;i<50;i++) {
//        printf("%d", n[i]);
//    }*/
//
//    char n[6] = {'a' , 'b' , 'c' , NULL}; //3�� ��� ����
//    int i;
//    //for (i = 0; i < 6; i++) {
//    //    scanf("%d", &n[i]);
//    //}
//    for (i = 0; i < 6; i++) {
//        printf("%c", n[i]);
//    }
//    printf("%s", n); //%s = str,, �迭�� �� �տ������� NULL���� ��� 
//}

////2���� �迭??
//int main() {
//	int num[3][3] //3x3 ���
//	// �� : num[0][n]
//	//>��	// (0,0) (0,1) (0,2)
//		    // (1,0) (1,1) (1,2)
//	    	// (2,0) (2,1) (2,2) 
//			
//		    // ^�� num[n][0]
//
//
//	//num = num[0][0] = num[0] : 0�� / �迭 �ּ�= �迭 �̸�=�� �� ĭ �ּ�
//


////�� �� ��
//
//int main() {
//		int *pa;
//		int n = 3;
//		pa = &n;
//		printf("%d\n", n); //n�� ��
//		printf("%d\n", *pa); //n�� �� (�ּ�(pa)�� ����Ű��(*) ���� �����~)
//		printf("%d\n", pa); //n�� �ּ�
//		printf("%d\n", &n); //n�� �ּ�
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

//���� �迭
//?

//���� �迭
//��� �� ��

	/*char name[3][100];
	name[0] = "apple";
	name[1] = "banana";
	name[2] = "cat";*/

//3x3 �迭�� ���� ���� �Ҵ��ϰ� �ּڰ� ã��
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