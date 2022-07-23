#include<stdio.h>
int main() {
	int n;
	int max, min;
	int arr[1000000];	// 정수의 개수는 1,000,000까지로 문제에 나와있으므로, 배열의 크기는 1,000,000으로 지정한다.
	scanf_s("%d", &n);	// 그 후 배열에 입력할 정수 개수를 뜻하는 정수형 변수 n의 값을 입력받아 변수에 저장한다.

	for (int i = 0; i < n; i++) {	// 다음, for문을 이용해
		scanf_s("%d", arr[i]);		// 입력한 n개 만큼의 값을
	}								// 배열에 순차적으로 저장.
	max = arr[0];					// 최소값, 최대값 모두 arr배열 1번째 요소, 즉 arr[0]으로 임의 정의.
	min = arr[0];

	for (int i = 0; i < n; i++) {	// 반복문을 통해 배열의 값을 비교
		if (max < arr[i]) {			// 이때 순차검색 방식으로 배열의 인덱스 값을 증가
			max = arr[i];			// 최대값보다 크면 그 배열의 요소값이 최대값으로 재정
		}							// 최소값보다 작으면 그 값이 최소값으로 재정되는 방식.
		else if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}
