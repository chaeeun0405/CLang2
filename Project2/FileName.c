#include <stdio.h>
#include<conio.h>

void good(int a) {
    printf("%d��", a);
}
int main() {
    int a;
    scanf("%d", &a);
    good(a);
}