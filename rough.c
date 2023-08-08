/* #include <stdio.h>
#include <string.h>
int main()
{
    char str1[30],str2[30];
    int len1,len2,a;
    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(a=0;a<=len2;a++){
        str1[len1+a]=str2[a];
    }
   printf("%s",str1);
    
}*/
#include <stdio.h>
#include <string.h>
int main()
{
    int num,a,b;
    char s1[30],s2[30];
    fgets(s1,sizeof s1,stdin);
    fgets(s2,sizeof s2,stdin);
    for(a=0;&s1[a]!="/0";a++)
    {
        printf("%c",s1[a]);
    }

}