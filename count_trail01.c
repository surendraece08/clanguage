/* Write a C program to count the number of trailing zeroes or ones */

#include <stdio.h>

#define UINT_SIZE 32

/* Method 1:
 * In this method, we count the bits when 'num' ends with 0 separately 
 * and 1 separately. This is not the most efficient way but a good 
 * way to start.
 */

int main()
{
	unsigned int num, i, zeroes_count = 0, ones_count = 0;

	printf("Enter num: ");
	scanf("%u", &num);
	
	/* If LSB of num == 0 */
	for(i = 0; i < UINT_SIZE; i++) {
		if(((num >> i) & 1) == 1)
			break;
		zeroes_count++;
	}

	printf("Trailing zeroes count: %u\n", zeroes_count);

	/* If LSB of num == 1 */
	for(i = 0; i < UINT_SIZE; i++) {
		if(((num >> i) & 1) == 0)
			break;
		ones_count++;
	}

	printf("Trailing ones count: %u\n", ones_count);

	return 0;
}


/* Method 2:
 * In this method, we don't mind if 'num' ends with 0 or 1.
 * We store the LSB into the variable 'trail' and start counting the 
 * occurance of the 'trail' bit in num.
 *
 * Inside the 'trailing_bitcount' function, we check if the bitwise AND
 * operation after shifting the number is equal to 'trail'.
 */

unsigned int trailing_bitcount(unsigned int num, unsigned int trail)
{
	unsigned int i, count = 0;

	for(i = 0; i < UINT_SIZE; i++) {
		if(((num >> i) & 1) == trail)
			count++;
		else
			break;
	}

	return count;
}

int main()
{
	unsigned int num, trail;

	printf("Enter num: ");
	scanf("%u", &num);

	/* To check if LSB is 0 or 1, to start the trailing count with */
	trail = num & 1;
	if(trail)
		printf("num - %u - trailing with 1s\n", num);
	else
		printf("num - %u - trailing with 0s\n", num);

	printf("Trailing bits count: %u\n", trailing_bitcount(num, trail));

	return 0;
}
