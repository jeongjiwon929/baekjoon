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

	// �ϳ��� �� �ȿ��� ���� �ʿ��� ������ŭ�� ������ ��½����� ��, �ʿ��� ������ŭ�� ���� ����ݴϴ�.
	// 1��° �� : (N - 1)���� ����, 1���� ��
	// 2��° �� : (N - 2)���� ����, 2���� ��