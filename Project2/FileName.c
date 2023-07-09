#include <stdio.h>

int main() {
    short M[2][2] = { {10, 20}, {30, 40} };
    short a, sum = 0;
    *M[0] = 15;
    *(M[0] + 1) = 25;
    *M[1] = 35;
    M[0][3] = 45;
    **M = 17;
    *(*(M + 1) + 1) = 47;
    *(*M + 1) = 27;
    **(M + 1) = 37;
    M[1][-1] += 2;
    for (a = 0; a < 4; a++)
        sum += M[0][a];
    printf("%d\n", sum);
}
