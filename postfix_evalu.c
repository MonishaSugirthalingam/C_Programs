#include <stdio.h>
#include <string.h>
#include <ctype.h>
void digits(int);
void multy();
void division();
void add();
void sub();
void expo();
struct postfix_evaluation
{
    int stack[10];
}s;
int static count2=0;
int main()
{
    char string[100],str[50][50],temp[20];
    int i=0,start=0,end=-1,a=0,b=0,count=0,len;
    fgets(temp,sizeof temp,stdin);
    len=strlen(temp);
    temp[len-1]='\0';
    strcat(string,temp);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
        {
            start=end+1;
            end=i;
            for(i=start;i<end;i++)
            {
                str[a][b]=string[i];
                b++;
            }
            a++;
            b=0;
            count++;
        }
        
    }
    for(i=end+1;i<strlen(string);i++)
    {
        str[a][b]=string[i];
        b++;
    }
    count++;
    int sum=0;
    int power=1;
    for(i=0;i<count;i++)
    {
        if(isdigit(str[i][0]))
        {
            if(strlen(str[i])>1)
            {
            len=strlen(str[i]);
            for(int j=len-1;j>=0;j--)
            {
                sum=sum+((int)str[i][j]-48)*power;
                power=power*10;
            }
            digits(sum);
            power=1;
            sum=0;
            }
            else
            {
                int a=(int)str[i][0]-48;
                digits(a);
            }
        
        }
        if(str[i][0]=='*')
        {
            multy();
        }
        if(str[i][0]=='/')
        {
            division();
        }
        if(str[i][0]=='+')
        {
            add();
        }
        if(str[i][0]=='-')
        {
            sub();
        }
        if(str[i][0]=='^')
        {
            expo();
        }
    }
    for(int j=0;j<count2;j++)
    {
        printf("%d ",s.stack[j]);
    }
    return 0;
}
void digits(int num)
{
    s.stack[count2]=num;
    count2++;
}
void multy()
{
    int m=s.stack[count2-2]*s.stack[count2-1];
    count2=count2-2;
    s.stack[count2]=m;
    count2++;
}
void division()
{
    int d=s.stack[count2-2]/s.stack[count2-1];
    count2=count2-2;
    s.stack[count2]=d;
    count2++;
}
void sub()
{
    int su=s.stack[count2-2]-s.stack[count2-1];
    count2=count2-2;
    s.stack[count2]=su;
    count2++;
}
void add()
{
    int a=s.stack[count2-2]+s.stack[count2-1];
    count2=count2-2;
    s.stack[count2]=a;
    count2++;
}
void expo()
{
    int e=1;
    int fac=0;
    while(fac<s.stack[count2-1])
    {
        e=e*s.stack[count2-2];
        fac++;
    }
    count2=count2-2;
    s.stack[count2]=e;
    count2++;
}