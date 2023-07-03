#include <stdio.h>

//단일 for문으로 값 할당 
int main() {
    int num[3][3];
    for (int i = 0; i < 9; i++) {
        num[i / 3][i % 3] = i;
    }
    for (int i = 0; i < 9; i++) {
        printf("%d", num[i / 3][i % 3]);
    }
    return 0;
}
