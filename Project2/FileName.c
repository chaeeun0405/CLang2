
#include <stdio.h> 
//�� ��� 2: �� ��� 1���� �����ʿ� ���� 0 1 2 3 ... n-2 n-1 n-2 . . . 0���� �߰�
int main() {
	int n, i, k, j, t = 1;
	scanf("%d", &n);
	for (i = 1; i <= n * 2 - 1; i++) {

		if (i <= n) {
			int a = n - i;
			while (a != 0) {
				a--;
				printf(" ");
			}
			for (k = 0; k < (1 + 2 * (i - 1)+(i-1)); k++) { //�� �ڵ忡�� + (i-1) �� �߰��� (���⼭ i-1�̶�,, 0���� �����ؼ� 1�� Ŀ���� ����, 0 1 2 3 . . . n-1)
				printf("*");
			}
			printf("\n");
		}
		else if (i > n) {
			int c = i - n;
			while (c != 0) {
				c--;
				printf(" ");
			}
			for (j = 1; j <= (n * 2 - (1 + 2 * t) + (n-t-1)); j++) { //�� �ڵ忡�� + (n-t-1) �� �߰��� (�̰� n-2�� �Ȱ��� ��, n-2 n-3 . . . 0)
				printf("*");
			}
			t = t + 1;
			printf("\n");
		}
	}
	return 0;
}
