#include <stdio.h>

void main()
{
	int i = 1, s = 0;
	while (i < 51) {
		i++;
			s += i;
	}
	printf("Sum from 1 to 50 = %d\n", s);
}