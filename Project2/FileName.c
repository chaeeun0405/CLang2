#include <stdio.h>

//점수 조작
//점수 중 최댓값 M
//모든 점수를 점수/M*100 함
//시험 본 과목 개수 N
 
int main() {
	float N, sum=0.0;
	scanf("%f", &N);
	float s[1000];

	for (int i = 0; i < N; i++) {
		scanf("%f", &s[i]);
	}

	float max = s[0];

	for (int i = 0; i < N; i++) {
		if (s[i] > max) {
			max = s[i];
		}
	}

	for (int i = 0; i < N; i++) {
			s[i] = (float)s[i] / (float)max * 100;
	
	}

	for (int i = 0; i < N; i++) {
		sum += s[i];
	}

	printf("%.14f", (float)sum / (float)N);
}