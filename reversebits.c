/* Write a program to reverse bits of a byte */

/* The goal of this program is to get and understand the logic of 
 * reversing bits of a byte. This program can be extrapolated to
 * reversing bits of any datatype. However, the output displayed
 * may not be in a readable/printable format. This program is
 * just for the purpose of understanding the concept.
 * 
 * Further experiments can be done with datatypes and format 
 * speicifiers. For this particular program, not all the
 * characters provided as input provided show up with a visible
 * output. Only for unsigned char datatype, the output can be 
 * verified.
 */
 
#include<stdio.h>

unsigned char reversebits(unsigned char n)
{
        int i,j;
        i = 0;
        j = sizeof(unsigned char)*8-1;
        while(i<j)
        {
                if(((n>>i)&1) != ((n>>j)&1))
                {
                        n ^= (1<<i);
                        n ^= (1<<j);
                }
                i++;
                j--;
        }

        return n;
}

int main()
{
        unsigned char n;
        printf("Enter n: ");
        scanf("%hhu",&n);

        printf("Reversed num: %hhu\n",reversebits(n));
        
        return 0;
}
