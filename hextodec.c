/* Write a program to convert a hexadecimal string to decimal number */

/* The input given is a string, which is always positive.
 * Eg:
 * Enter hex number: abc
 * Decimal number is: 2748
 *
 * Enter hex number : rty
 * Invalid input
 *
 * Enter hex number: 123
 * Decimal number is: 291
 */

/* Constraints:
 * 1. Hexadecimal string is the input, which may contain 0-9, a-z and A-Z
 * 2. If the string contains a character outside this set, the program should
 *    immediately print invalid input and exit.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char hex[10];
	unsigned int len, i, ascii_offset, result = 0;

	printf("Enter hex number: ");
	scanf("%s", hex);

	len = strlen(hex);

	if(len > 8) {
		printf("Invalid input..\n");
		return 0;
	}

	i = 0;
	while(i < len) {
	/* Checking the validity of the input string */
		switch(hex[i]) {
			case 'a'...'f':
				ascii_offset = 'a' - 10;
				break;
			case 'A'...'F':
				ascii_offset = 'A' - 10;
				break;
			case '0'...'9':
				ascii_offset = '0';
				break;
			default:
				printf("Invalid input..\n");
				exit(0);
		}

		result = (result * 16) + (hex[i] - ascii_offset);
		i++;
	}

	printf("Decimal number is: %u\n", result);

	return 0;
}
