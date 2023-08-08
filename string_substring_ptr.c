/*Ex:
INPUT:
3         output : FOUND
java
basic
pascal
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int len,i,j,sum=0,flag=0;
    char str[10][10],word[10],*q;
    q=word;
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%s",word);
    for(i=0;i<len;i++)
    {
        char *p=str[i];
        for(j=0;j<strlen(str[i]);j++)
        {
            if((*(p+j)==*(q+j)) && strlen(str[i])==strlen(word))
            {
                sum=sum+1;
            }
            
        }
        if(sum==strlen(str[i]))
        {
            printf("FOUND");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NOTFOUND");
    }
}