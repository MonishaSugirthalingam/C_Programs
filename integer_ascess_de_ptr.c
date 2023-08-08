/* AIM :  A C program to sort the digits of an integer in ascending and descending order using pointers. 
AUTHOR : MONISHA.S
DATE   : 28-03-2022
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len;
    char integer[10],*p,temp;
    p=integer;
    scanf("%s",integer);
    len=strlen(integer);
    for(i=0;i<len;i++)
    {
       for(j=0;j<len;j++){
           if(*(p+i)>*(p+j)){
               temp=*(p+i);
               *(p+i)=*(p+j);
               *(p+j)=temp;
           }
       }
    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",*(p+i));
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}