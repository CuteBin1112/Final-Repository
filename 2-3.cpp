#include <stdio.h>

void main() {

	int i = 1, s = 0;
	do {

		s += i;
		i++;

	} while (i < 51);
	printf("1���� 50���� ������ �� : %d\n", s);
}