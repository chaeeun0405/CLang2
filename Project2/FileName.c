#include <stdio.h>

int main() {
    char M[] = "ABC";
    char* ap = "ABC";
    puts(M); //M ���, ABC
    puts(ap); //ap ���, ABC
    ap = "DEF"; 
    puts(ap); //ap ���, DEF
    printf("%c\n", ap[1]); //���ڿ� �ϳ� ���, E
    strcpy(M, "YZ"); //������ ���ڿ��� ���ʿ� �ִ´�, M = YZ
    puts(M); //YZ
}

