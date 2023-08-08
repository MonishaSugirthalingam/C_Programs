#include <stdio.h>
#include <string.h>
int read_students();
void calculate_students(int);
struct student
{
    char name[20];
    char vowelname[20];
    int vowelarr;
    int consarr;
}s1[10];
void calculate_students(int n)
{
    char s[20];
    int k=0,vowels=0,consonents=0;
    for(int i=0;i<n;i++)
    {
        strcpy(s,s1[i].name);
        for(int j=0;j<strlen(s);j++)
        {
            if(s[0]=='a'||s[0]=='e'||s[0]=='i' ||s[0]=='o' ||s[0]=='u'||s[0]=='A'||s[0]=='E'||s[0]=='I' ||s[0]=='O' ||s[0]=='U')
            {
                strcpy(s1[k].vowelname,s);
                k++;
            }
            if(s[j]=='a'||s[j]=='e'||s[j]=='i' ||s[j]=='o' ||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I' ||s[j]=='O' ||s[j]=='U')
            {
                vowels++;
            }
            else
            {
                consonents++;
            }
        }
        s1[i].vowelarr=vowels;
        vowels=0;
        s1[i].consarr=consonents;
        consonents=0;
    }
    if(k!=0)
    {
    printf("NAMES STARTED WITH VOWELS\n");
    for(int i=0;i<k;i++)
    {
       printf("%s",s1[i].vowelname) ;
    }
    }
    else
    {
        printf("NO STUDENT NAME STARTING WITH VOWEL\n");
    }
    printf("STUDENTS NAME WITH NO.OF.VOWELS AND NO.OF.CONSONENTS\n");
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",s1[i].name,s1[i].vowelarr,s1[i].consarr);
    }
}
int read_students()
{
    int num;
    char temp[20];
    scanf("%d",&num);
    while(getchar()!='\n');
    for(int a=0;a<num;a++)
    {
        fgets(temp,20,stdin);
        temp[strlen(temp)-1]='\0';
        strcpy(s1[a].name,temp);
    }
    return num;
}
int main()
{
    int n;
    n=read_students();
    calculate_students(n);
    return 0;
}