#include <stdio.h>


int main() {
    short M[2][2] = { {10, 20}, {30, 40} };
    short* ap, * bp;
    short a, sum = 0;

    ap = M[0];
    bp = M[0] + sizeof(M) / sizeof(M[0][0]) - 1; //sizeof(M) = 8 , sizeof(M[0][0]) = 2 / bp = M[0]+3
    for (a = 0; a < sizeof(M) / sizeof(M[0][0]); a++) //(a=0 ; a<4 ; a++)
        sum += *ap++ + *bp--; //sum = 250, ap의 참조값과 bp의 참조값을 더한 뒤 ap는 ++, bp는 --. 이때, 반복문의 마지막에도 ++ --가 들어간다는 점에 주의

    *--ap = 45; //M[2][3] 되어있는 걸 M[2][2]로 되돌리고 값 입력 (10 20 30 45)
    *++bp = 15; //M[0][-1] 되어있는 걸 M[0][0]로 되돌리고 값 입력 (15 20 30 45)
    a = 0;

    bp[++a]++; //bp[1] = M[0][1] + 1 = 21
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
    ++ap[-a--];
    ap = M[0];
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);

    for (; a < sizeof(M) / sizeof(M[0][0]); a++) //값이 정해져있다면 굳이 초깃값을 지정할 필요는 없음
        sum -= ap[a]; //sum = sum - ap[a] / sum == 88

    ap = M[1] - sizeof(M[0]) / sizeof(M[0][0]); 
    printf("%d\n", *ap);
    printf("%d\n", sum);
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
}
