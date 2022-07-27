#include<stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			printf(" ");
			for (int k = 1; k <= i; k++) {
				printf("*");
				printf("\n");
			}

			return 0;
		}
	}

	// 하나의 줄 안에서 먼저 필요한 개수만큼의 공백을 출력시켜준 후, 필요한 개수만큼의 별을 찍어줍니다.
	// 1번째 줄 : (N - 1)개의 공백, 1개의 별
	// 2번째 줄 : (N - 2)개의 공백, 2개의 별