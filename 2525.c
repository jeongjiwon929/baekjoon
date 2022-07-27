#include<stdio.h>
int main() {
	int hour, min, time;
	scanf_s("%d %d", &hour, &min);	// 먼저 시간과 분을 첫째 줄에 입력받고
	scanf_s("%d", &time);				// 다음 줄에는 시간을 입력받습니다

	hour += time / 60;	// 입력받은 시간인 time 변수를 60으로 나눈 값을 hour에 더하여 줍니다. time이 60보다 크다면 그 몫인 1 혹은 그 이상의 값이 hour에 추가로 더해질 것입니다. time이 60보다 작다면 int형이므로 0의 값이 hour에 더해질 것입니다
	min += time % 60;	// time을 60으로 나눈 나머지 값을 min에 더하여 줍니다.

	if (min >= 60) {	// 만약 min의 결과가 60보다 크거나 같다면
		hour++;			// hour에 1을 더해주고,

		min %= 60;		// min은 60으로 나눈 나머지를 저장해줍니다.
	}

	if (hour >= 24) {	// 시간 hour변수의 값이 24가 넘어간다면,
		hour %= 24;		// hour에 24로 나눈 나머지를 저장해줍니다.

		printf("%d %d\n", hour, min);		// 시간에 대한 계산이 완료되어 그대로 hour와 min을 출력해줍니다.
	}

	return 0;
}