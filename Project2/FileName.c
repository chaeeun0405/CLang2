#include <stdio.h>
#include<conio.h>

int IsUpper(char m) { return (m >= 65 && m <= 90 ? 1 : 0); } // m�� 60 �̻��̰� 90 �����̸� 1 ��ȯ �ƴϸ� 0 ��ȯ
int IsLower(char m) { return (m >= 97 && m <= 122 ? 1 : 0); } // m�� 97 �̻��̰� 122 �����̸� 1 ��ȯ �ƴϸ� 0 ��ȯ
int IsAlpha(char m) { return (IsLower(m) || IsUpper(m) ? 1 : 0); } // lsL �Ǵ� lsU�̸� 1 ��ȯ �ƴϸ� 0 ��ȯ

int main()
{
    printf("%d\n", IsUpper('A')); //1
    printf("%d\n", IsLower('A')); //0
    printf("%d\n", IsAlpha('A')); //1
} 
