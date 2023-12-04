#include <stdio.h>

void main() {

	int i = 1, s = 0;
	do {

		s += i;
		i++;

	} while (i < 51);
	printf("1부터 50까지 정수의 합 : %d\n", s);
}