/* Write a program to find maximum of 4 given integers */

/* This program can be implemented in two methods. */

/* METHOD 1 - By considering each argument as individual variable.
 * This method is little clumsy when compared to the other method.
 * However, this approach improve the capability of framing logic.
 * 
 * Note that the purpose of curly braces is just separate the scope
 * of the statements within if and else constructs.
 */
 
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                return a;
            else
                return d;
        } 
        else 
        {
            if(c>d)
                return c;
            else 
                return b;
        }
    }
    else 
    {
        if (b>c)
        {
            if(b>d)
                return b;
            else
                return d;
        }
        else 
        {
            if (c>d)
                return c;
            else 
                return d;
        }
    }
}

int main() 
{
    int a, b, c, d;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Maximum of given 4 numbers: %d\n", max_of_four(a,b,c,d));
    
    return 0;
}



/* METHOD 2 - In this method, we copy the four arguments into an array
 * and then loop through the array to find the maximum number. This is
 * the easiest approach to find maximum of 4 given numbers.
 */

#include<stdio.h>

int max_of_four(int a, int b, int c, int d)
{
        int array[4] = {a,b,c,d};
        int max = a, i;
        for(i=1;i<4;i++)
                if(max < array[i])
                        max = array[i];

        return max;
}

int main()
{
        int a, b, c, d;
        printf("Enter 4 numbers: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("Maximum of given 4 numbers: %d\n", max_of_four(a,b,c,d));

        return 0;
}
