#include <stdio.h>
#include<conio.h>

void printout1()
{
    printf("�ٴٷ� ���� ~~");
}

void printout2() {
    printf("�ÿ��� �ĵ��Ҹ�!!! ");
}
void printout3()
{
    printf("\n������ ������");
}

int main() {
    int i;
    printout1();
    for (i = 1; i <= 3; i++)
    {
        printout2();
    }
    printout3();
}