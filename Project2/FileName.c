#include <stdio.h>

//����� ���� for��
int main() {
    int n;
    scanf("%d", &n);
    for (int row = 0; row < n * 2 - 1; row++) {
        for (int col = 0; col < n * 2 - 1; col++) {
            if (row < n)
                if ((n - col - 1 <= row && col - n + 1 <= row))
                    printf("*");
                else
                    printf(" ");
            else {
                if ((n - col - 1 <= 2 * (n - 1) - row && col - n + 1 <= 2 * (n - 1) - row))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
