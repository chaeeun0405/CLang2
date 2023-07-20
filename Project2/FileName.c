#include <stdio.h>
#include<conio.h>

void printout1()
{
    printf("바다로 가요 ~~");
}

void printout2() {
    printf("시원한 파도소리!!! ");
}
void printout3()
{
    printf("\n돌고래가 보여요");
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