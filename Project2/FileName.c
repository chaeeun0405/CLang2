#include <stdio.h>

int main() {
	short M[2][2] = { {10, 20}, {30, 40} }; //short : 2byte
	short a;
	a = M[0][0] + M[0][1] + M[1][0] + M[1][1]; //100
	a += (*&M[1][0] + *M[0] + *(M[1] + 1)); //180
	a -= **M; //170
	//printf("%d\n", *M);
	//printf("%d\n", *(M + 1));
	//printf("%d\n", *(M + 1)+1);
	//printf("%d\n", *(*(M + 1) + 1));
	a += *(*(M + 1) + 1); //210
	printf("%d\n", a);

}
