/* Write a c program to toggle alternate bits of a number */
#include <stdio.h>

#define UINTSIZE 32

int main()
{
	unsigned int n, i;

	printf("n: ");
	scanf("%u", &n);

	for(i = 0; i < UINTSIZE; i += 2) {
		n = n ^ (1 << i);
	}

	printf("n after toggling alternate bits: %u\n", n);

	return 0;
}
