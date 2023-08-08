#include <stdio.h>
#include <string.h>
int main()
{
    char s[50],alpha;
    int a,length,occ=0;
    gets(s);
    alpha=getchar();
    length=strlen(s);
    for(a=0;a<length;a++)
    {
        if(s[a]==alpha)
        {
            occ++;
        }
    }
    printf("%d",occ);
    
}