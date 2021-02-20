/* Write a program to swap nibbles of a byte */

/* 4 bit put together is called a Nibble.
 * This program swaps nibbles of a give byte.
 * To make this program simple, we are using 
 * unsigned char to take a byte as input.
 *
 * Eg: For the input 6, the binary equivalent 
 * is 0000 0110. When the nibbles are swapped,
 * the output comes as 0110 0000, which is 96
 * in decimal.
 */

#include<stdio.h>

int main()
{
        unsigned char num;
        printf("Enter num: ");
        scanf("%hhu",&num);

        num = ((num >> 4) & 0x0F) | ((num << 4) & 0XF0);

        printf("Resultant number after swapping nibbles: %hhu\n",num);

        return 0;
}
