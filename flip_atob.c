/* Write a C program that flips the bits to convert the unsigned integer
 * a to unsinged integer b.
 */

#include <stdio.h>

#define UINT_SIZE 32

int main()
{
	unsigned int a, b, i;

	printf("Enter a, b: ");
	scanf("%u%u", &a, &b);

	printf("Entered numbers are a: %u\tb:%u\n", a, b);

	for(i = 0; i < UINT_SIZE; i++) {
		if(((a >> i) & 1) ^ ((b >> i) & 1)) {
			a = a ^ (1 << i);
		}
	}

	printf("Flipped numbers are a:%u\tb:%u\n", a, b);

	return 0;
}
