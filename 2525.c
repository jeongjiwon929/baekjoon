#include<stdio.h>
int main() {
	int hour, min, time;
	scanf_s("%d %d", &hour, &min);	// ���� �ð��� ���� ù° �ٿ� �Է¹ް�
	scanf_s("%d", &time);				// ���� �ٿ��� �ð��� �Է¹޽��ϴ�

	hour += time / 60;	// �Է¹��� �ð��� time ������ 60���� ���� ���� hour�� ���Ͽ� �ݴϴ�. time�� 60���� ũ�ٸ� �� ���� 1 Ȥ�� �� �̻��� ���� hour�� �߰��� ������ ���Դϴ�. time�� 60���� �۴ٸ� int���̹Ƿ� 0�� ���� hour�� ������ ���Դϴ�
	min += time % 60;	// time�� 60���� ���� ������ ���� min�� ���Ͽ� �ݴϴ�.

	if (min >= 60) {	// ���� min�� ����� 60���� ũ�ų� ���ٸ�
		hour++;			// hour�� 1�� �����ְ�,

		min %= 60;		// min�� 60���� ���� �������� �������ݴϴ�.
	}

	if (hour >= 24) {	// �ð� hour������ ���� 24�� �Ѿ�ٸ�,
		hour %= 24;		// hour�� 24�� ���� �������� �������ݴϴ�.

		printf("%d %d\n", hour, min);		// �ð��� ���� ����� �Ϸ�Ǿ� �״�� hour�� min�� ������ݴϴ�.
	}

	return 0;
}