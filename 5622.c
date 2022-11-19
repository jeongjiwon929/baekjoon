#include <stdio.h>
#include <string.h>

main() {
	char num[15];
	scanf("%s", num);

	int len = strlen(num);
	int i, t = 0;

	for (i = 0; i < len; i++) {
		if (num[i] >= 'A' && num[i] <= 'C')
			t += 3;
		if (num[i] >= 'D' && num[i] <= 'F')
			t += 4;
		if (num[i] >= 'G' && num[i] <= 'I')
			t += 5;
		if (num[i] >= 'J' && num[i] <= 'L')
			t += 6;
		if (num[i] >= 'M' && num[i] <= 'O')
			t += 7;
		if (num[i] >= 'P' && num[i] <= 'S')
			t += 8;
		if (num[i] >= 'T' && num[i] <= 'V')
			t += 9;
		if (num[i] >= 'W' && num[i] <= 'Z')
			t += 10;
	}
	printf("%d\n", t);
}
