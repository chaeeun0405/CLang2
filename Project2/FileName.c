#include <stdio.h>

int main() {
    char M[] = "ABC";
    char* ap = "ABC";
    puts(M); //M 출력, ABC
    puts(ap); //ap 출력, ABC
    ap = "DEF"; 
    puts(ap); //ap 출력, DEF
    printf("%c\n", ap[1]); //문자열 하나 출력, E
    strcpy(M, "YZ"); //오른쪽 문자열을 왼쪽에 넣는다, M = YZ
    puts(M); //YZ
}

