/* This program does not convert a given decimal number to binary.
 * But prints the binary equivalent 1s and 0s.
 */

#include<stdio.h>

int main()
{
        int num, i;
        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Binary number is: ");

        for(i=(sizeof(int)*8)-1; i>=0; i--)
                if((1<<i)&num)
                        printf("1");
                else
                        printf("0");
        printf("\n");

        return 0;
}
