#include <stdio.h>

//단일 for문으로 nxn 배열 값 할당 및 출력
int main() {
    int num[3][3];
    int i, j;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i / 3][i % 3]); //0,0 0,1 0,2 1,0 이런 식으로 입력됨..오
    }
    int min = num[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (num[i][j] < min) {
                min = num[i][j];
            }
        }
    }

        printf("%d", min);

    return 0;
}
