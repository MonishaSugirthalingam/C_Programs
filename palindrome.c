/*
Write a C program to read a text/ string from the user. Check whether the given string is palindrome or not. If palindrome, print “Palindrome”. If not palindrome then find a single/ one position in the given string and replace with the required character to make the string a palindrome. Display the Palindrome string after the character replacement. Use Pointers to check the string palindrome, replacement of character( if necessary).

Sample I/O 1:

Enter string : liril

liril is Palindrome

Sample I/O 2:

Enter string : lirel

Not palindrome

Enter the position for replacement : 2

Enter the replacing character : e

lerel is palindrome
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *string1[5],temp[20],letter,line;
    int i,j,k=0, length,occ;
    int count = 0;
    string1[0]=(char*)malloc(sizeof(char)*1);
    printf("Enter a string  : ");
    scanf("%s",string1[0]);
    strcpy(temp,string1[0]);
    for(i=strlen(string1[0])-1;i>=0;i--)
    {
        if(string1[0][i]==temp[k])
           {
              count++;
           }
           k++;
    }
    if(count!=strlen(string1[0]))
    {
      printf("Enter the position for replacement :") ;
      scanf("%d",&occ);
      scanf("%c",&line);
      printf("Enter the replacing character :");
      scanf("%c",&letter);
      string1[0][occ-1]=letter;
      printf("%s is Palindrome",string1[0]);
    }
    else
    {
        printf("%s is Palindrome",string1[0]);
    }
    return 0;
}