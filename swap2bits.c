/* This program swaps every two bits of a given number.
 * Eg:
 * The input is 182 with binary equivalent 10110110.
 * If every two bits are swapped, the resultant is
 * 01111001, whose decimal equivalent is 121.
 */
 
#include<stdio.h>

void printbinary(unsigned int n)
{
        int i;
        for(i=sizeof(int)*8-1; i>=0 ;i--)
                if((1<<i)&n)
                        printf("1");
                else
                        printf("0");

        printf("\n");
}

int main()
{
        unsigned int num, shifted_num;
        int i;
        int size;
        printf("Enter num: ");
        scanf("%u", &num);
        shifted_num = num;
        size = sizeof(unsigned int)*8;

        for(i=0; i<size; i+=2)
                if(((shifted_num>>i)&1) != ((shifted_num>>(i+1))&1))
                {
                        shifted_num ^= (1<<i);
                        shifted_num ^= (1<<(i+1));
                }

        printf("Shifted number = %u\n",shifted_num);
        printf("Binary of given number:\n");
        printbinary(num);
        printf("Binary of shifted number:\n");
        printbinary(shifted_num);

        return 0;
}
