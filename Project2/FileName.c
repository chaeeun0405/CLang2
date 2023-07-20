#include <stdio.h>
#include<conio.h>

int IsUpper(char m) { return (m >= 65 && m <= 90 ? 1 : 0); } // m이 60 이상이고 90 이하이면 1 반환 아니면 0 반환
int IsLower(char m) { return (m >= 97 && m <= 122 ? 1 : 0); } // m이 97 이상이고 122 이하이면 1 반환 아니면 0 반환
int IsAlpha(char m) { return (IsLower(m) || IsUpper(m) ? 1 : 0); } // lsL 또는 lsU이면 1 반환 아니면 0 반환

int main()
{
    printf("%d\n", IsUpper('A')); //1
    printf("%d\n", IsLower('A')); //0
    printf("%d\n", IsAlpha('A')); //1
} 
