#include <stdio.h>


//문자형, 문자열, 정수형 배열의 차이점
int main() {
   /* int i;
    int n[50] = { 0, 1, 2 }; //뒤에 쓰레기값 나옴,, 정수형 배열은 NULL 없음!
    for (i=0;i<50;i++) {
        printf("%d", n[i]);
    }*/

    char n[6] = {'a' , 'b' , 'c' , NULL}; //3개 찍고 멈춰
    int i;
    //for (i = 0; i < 6; i++) {
    //    scanf("%d", &n[i]);
    //}
    for (i = 0; i < 6; i++) {
        printf("%c", n[i]);
    }
    printf("%s", n); //%s = str,, 배열의 맨 앞에서부터 NULL까지 출력 
}