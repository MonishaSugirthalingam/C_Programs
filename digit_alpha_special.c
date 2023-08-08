/*AIM  : C Programming to count the number of digits,alphas and special characters in given string
AUTHOR :MONISHA.S
DATE   :01-02-2022
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char string[50];
    int numberofalphas=0,numberofdigits=0,numberofspecialchar=0,length,letters;
    printf("Enter a String : ");
    gets(string);
    length=strlen(string);
    for(letters=0;letters<length;letters++)
    {
        if(isalpha(string[letters]))
        {
            numberofalphas++;
        }
        else if(isdigit(string[letters]))
        {
            numberofdigits++;
        }
        else
        {
            numberofspecialchar++;
        }
    }
    printf("Total number of alphabets is :%d\n",numberofalphas);
    printf("Total number of digits is :%d\n",numberofdigits);
    printf("Total number of special characters is :%d\n",numberofspecialchar);
    

}