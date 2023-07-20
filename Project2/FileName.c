#include <stdio.h>
#include<conio.h>

int retvalue() {
    int a, b;
    a = 2, b = 3;
    return a + b;
}

int main() {
    printf("결과 = %d\n", retvalue()); //re 함수의 리턴값을 출력, 저렇게 해도 5가 출력됨
}

//이렇게도 가능
//int main() {
//    a = retvalue(); //5
//    printf("결과 = %d\n", a);
//}
