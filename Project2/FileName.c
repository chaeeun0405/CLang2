#include <stdio.h>


int main() {
    short M[2][2] = { {10, 20}, {30, 40} };
    short* ap, * bp;
    short a, sum = 0;

    ap = M[0];
    bp = M[0] + sizeof(M) / sizeof(M[0][0]) - 1; //sizeof(M) = 8 , sizeof(M[0][0]) = 2 / bp = M[0]+3
    for (a = 0; a < sizeof(M) / sizeof(M[0][0]); a++) //(a=0 ; a<4 ; a++)
        sum += *ap++ + *bp--; //sum = 250, ap�� �������� bp�� �������� ���� �� ap�� ++, bp�� --. �̶�, �ݺ����� ���������� ++ --�� ���ٴ� ���� ����

    *--ap = 45; //M[2][3] �Ǿ��ִ� �� M[2][2]�� �ǵ����� �� �Է� (10 20 30 45)
    *++bp = 15; //M[0][-1] �Ǿ��ִ� �� M[0][0]�� �ǵ����� �� �Է� (15 20 30 45)
    a = 0;

    bp[++a]++; //bp[1] = M[0][1] + 1 = 21
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
    ++ap[-a--];
    ap = M[0];
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);

    for (; a < sizeof(M) / sizeof(M[0][0]); a++) //���� �������ִٸ� ���� �ʱ갪�� ������ �ʿ�� ����
        sum -= ap[a]; //sum = sum - ap[a] / sum == 88

    ap = M[1] - sizeof(M[0]) / sizeof(M[0][0]); 
    printf("%d\n", *ap);
    printf("%d\n", sum);
    printf("%d %d %d %d\n", M[0][0], M[0][1], M[1][0], M[1][1]);
}
