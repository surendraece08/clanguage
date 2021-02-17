/* Write a C program to read a sentence */

/* We cannot take a sentence as user input as scanf is space-separated function.
 * This means that scanf stops reading the input as soon as a space character 
 * is encountered. This makes us difficult to read a sentence from the user.
 * Following are the three methods to read a sentence.
 */

/*  METHOD 1 - Using scanf loop 
 * In this method, we use scanf within a loop and read each character till 
 * a '\n' special character is reached. Note that '\n' is also read into 
 * the buffer. So to terminate the string, we replace '\n' with '\0'.
 * 
 * Instead of using scanf, getchar() function can also be used.
 * However, using this method is a resource costly i.e., using a loop
 * to read every single character and checking it manually if it is 
 * a new line. 
 */
 
#include<stdio.h>
int main()
{
        int i;
        char sen[100];
        printf("Enter sentence: ");
        i = 0;
        do{
                scanf("%c",&sen[i]);
//                sen[i] = getchar();
        }while(sen[i++] != '\n');
        sen[--i] = '\0';  //Replacing '\n' with '\0'

        puts(sen);
        
        return 0;
}


/* METHOD 2 - Using scanf and regular expressions (RegEx)
 * 
 * Refer this link on how C language or scanf supports RegEx
 * https://stackoverflow.com/questions/14873542/use-scanf-with-regular-expressions
 *
 * However, using scanf("%[^\n]s", sen); means taking the input as a string
 * into the array sen till the character '\n' is encountered. 
 * This can be replaced with any character that you assume as a delimiter.
 */
 
#include<stdio.h>
int main()
{
        char sen[100];
        printf("Enter sentence: ");
        scanf("%[^\n]s", sen);

        puts(sen);
        
        return 0;
}


/* METHOD 3 - Using fgets function 
 * Using the fgets function, we read the input directly to the string
 * using the STDIN buffer. This method also creates overhead of dealing,
 * with internal temporary files, as we are using the fgets function.
 */

include<stdio.h>
int main()
{
        char sen[100];
        printf("Enter sentence: ");
        fgets(sen, 100, stdin);

        puts(sen);
        
        return 0;
}


/* CONCLUSION 
 * Use Method 2, as it is very light weight code using simple RegEx and 
 * when your delimiting mechanism is a particular character (here, '\n')
 *
 * When you want to read only a particular number of characters, use
 * Method 1 or Method 3. 
 * 
 * The approach of Method 1 is very useful when dealing with dynamic 
 * memory allocation, instead of using arrays to store the string. 
 * 
 * The approach of Method 3 is useful when it is often for you to
 * use files in your program.
 */
