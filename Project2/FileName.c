#include <stdio.h>
#include<conio.h>

int retvalue() {
    int a, b;
    a = 2, b = 3;
    return a + b;
}

int main() {
    printf("��� = %d\n", retvalue()); //re �Լ��� ���ϰ��� ���, ������ �ص� 5�� ��µ�
}

//�̷��Ե� ����
//int main() {
//    a = retvalue(); //5
//    printf("��� = %d\n", a);
//}
