/*
Write a C Program using pointer to take a list of ‘n’ strings as input using an array. Write a
function rev_sort_str() to print the reverse of the names present in the string in sorted order
using pointer and count the number of string in the array which are palindrome. If count is
zero, then print “None of the string is palindrome”
Input
Number of Strings: 3
radar
madam
hello
Output
Reversed Strings = radar madam olleh
Sorted reversed strings = madam olleh radar
Palindrome = 2
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int rev(char *temp,int k)
{
    int j=1,i;
    char s;
    for(i=0;i<k/2;i++)
    {
        s=temp[i];
        temp[i]=temp[k-j];
        temp[k-j]=s;
        j++;
    }
    return 0;
}
int finding_palindrom(char *str[],int n)
{
    int i,j,len,count=0,k=0, palindrom=0;
    char temp[20];
    for(i=0;i<n;i++)
    {
        strcpy(temp,str[i]);
        len=strlen(str[i]);
        for(j=len-1;j>=0;j--)
        {
           
           if(str[i][j]==temp[k])
           {
              count++;;
           }
           k++;
        }
        if(count==len)
        {
            palindrom++;
        }
        count=0;
        k=0;
    }
    if(palindrom!=0)
    {
    printf("Palindrome = %d",palindrom);
    }
    else
    {
     printf("None of the strings is a palindrome")   ;
    }
    return 0;
}
int rev_sort_str(char *str[],int n)
{
    int i,j;
    char temp[30];
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++) 
       {
           if(strcmp(str[i],str[j])>0)
           {
               strcpy(temp,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],temp);
           }
       }
    }
    printf("Sorted reversed strings = ");
    for(i=0;i<n;i++)
    {
        printf("%s ",str[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int i,num,len,k;
    char *str[25],temp[50];
    scanf("%d",&num);
    while(getchar()!='\n');
    for(i=0;i<num;i++)
    {
        str[i]=(char*)malloc(num*sizeof(char));
        fgets(temp,50,stdin);
        len=strlen(temp);
        temp[len-1]='\0';
        k=strlen(temp);
        rev(temp,k);
        strcpy(str[i],temp);
    }
    printf("Reversed Strings = ");
    for(i=0;i<num;i++)
    {
        printf("%s ",str[i]);
    }
    printf("\n");
    rev_sort_str(str,num);
    finding_palindrom(str,num);
    return 0;
}