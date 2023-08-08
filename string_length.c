/*AIM  : C programming to show any three string manipulation
AUTHOR :MONISHA.S
DATE   :01-03-2022
*/ 
#include <stdio.h>
#include <string.h>
int main()
{
    char string[30],newstring[30]="",fstring[30],lstring[30];
    int length;
    printf("Enter a String : ");
    gets(string);
    length=strlen(string);
    printf("\nString Manipulations \n");
    printf("\nCalculate the length of the string\n");
    printf("The length of the given string %s is : %d\n",string,length);
    printf("\nCopies a string to another string\n");
    strcpy(newstring,string);
    printf("The copy of the given string is :%s \n",newstring);
    printf("\nConcatination of two string\n");
    printf("Enter a two strings one by one : \n");
    gets(fstring);
    gets(lstring);
    strcat(fstring,lstring);
    printf("\nAfter the concatination of two strings is: %s",fstring);
}