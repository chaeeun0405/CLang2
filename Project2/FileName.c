#include <stdio.h>


//������, ���ڿ�, ������ �迭�� ������
int main() {
   /* int i;
    int n[50] = { 0, 1, 2 }; //�ڿ� �����Ⱚ ����,, ������ �迭�� NULL ����!
    for (i=0;i<50;i++) {
        printf("%d", n[i]);
    }*/

    char n[6] = {'a' , 'b' , 'c' , NULL}; //3�� ��� ����
    int i;
    //for (i = 0; i < 6; i++) {
    //    scanf("%d", &n[i]);
    //}
    for (i = 0; i < 6; i++) {
        printf("%c", n[i]);
    }
    printf("%s", n); //%s = str,, �迭�� �� �տ������� NULL���� ��� 
}