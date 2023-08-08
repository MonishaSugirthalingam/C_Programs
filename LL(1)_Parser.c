#include <string.h>
#include <stdio.h>
#include <stdbool.h>
struct node 
{
    char rules[100];
    char rules1[100];
    char RmvLftRec[100];
};
bool complete(int flag[],int n)
{
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1)
        {
            count++;
        }
    }
    if(count==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int RemoveLeftRecursion(struct node *b,struct node *c,int n)
{
    int flag[n+1];
    char NonTer[]={'Z','Y','X','W','V'};
    for(int i=0;i<n;i++)
    {
        flag[i]=0;
    }
    int n1=0;
    int p1=0;
    int count=0;
    char temp[100];
    char new[100];
    int i=0,j;
    while(!complete(flag,n))
    {
        strcpy(temp,b[i].rules1);
        if(temp[0]==temp[3])
        {
            flag[i]=1;
            new[count]=NonTer[n1];
            count++;
            new[count]='-';
            count++;
            new[count]='>';
            count++;
            j=4;
            //new[count]=temp[j];
            //count++;
            while(temp[j]!='\0')
            {
                new[count]=temp[j];
                j++;
                count++;
            }
            new[count]=NonTer[n1];
            count++;
            new[count]='\0';
            strcpy(c[p1].RmvLftRec,new);
            p1++;
            strcpy(new,"");
            count=0;
            new[count]=NonTer[n1];
            count++;
            new[count]='-';
            count++;
            new[count]='>';
            count++;
            new[count]='^';
            count++;
            new[count]='\0';
            strcpy(c[p1].RmvLftRec,new);
            p1++;
            char subr[100];
            for(int k=0;k<n;k++)
            {
                strcpy(subr,b[k].rules1);
                int len=strlen(subr);
                if(subr[0]==temp[0] && flag[k]!=1)
                {
                    subr[len]=NonTer[n1];
                    len++;
                    subr[len]='\0';
                    strcpy(c[p1].RmvLftRec,subr);
                    p1++;
                    flag[k]=1;
                }
            }
            strcpy(subr,"");
            strcpy(temp,"");
            strcpy(new,"");
            count=0;
            j=0;
        }
        else
        {
            strcpy(c[p1].RmvLftRec,b[i].rules1);
            p1++;
            flag[i]=1;
        }
        i++;
        n1++;
    }
    return p1;
}
int MadeRules(struct node *a,struct node *b,int n)
{
    int x=n;
    char temp[100],left[100];
    int count=0,stop;
    for(int i=0;i<n;i++)
    {
        strcpy(temp,a[i].rules);
        left[count]=temp[0];
        count++;
        left[count]='-';
        count++;
        left[count]='>';
        count++;
        for(int j=0;j<strlen(temp);j++)
        {
            if(temp[j]=='|')
            {
                j++;
                while(temp[j]!='\0')
                {
                    left[count]=temp[j];
                    count++;
                    j++;
                }
            }
        }
        left[count]='\0';
        strcpy(a[x].rules,left);
        x++;
        count=0;
        strcpy(temp,"");
        strcpy(left,"");
    }
    //for(int i=0;i<n+x;i++)
    //{
        //printf("%s\n",a[i].rules);
    //}
    //printf("\n\n");
    char r[100];
    int j;
    count=0;
    for(int i=0;i<n+x;i++)
    {
        strcpy(temp,a[i].rules);
        for(j=0;j<strlen(temp);j++)
        {
            if(temp[j]=='|')
            {
                break;
            }
            r[j]=temp[j];
        }
        if(temp[j]=='\0')
        {
            strcpy(b[count].rules1,temp);
            count++;
        }
        else
        {
            r[j]='\0';
            strcpy(b[count].rules1,r);
            count++;
        }
        strcpy(r,"");
        strcpy(temp,"");
        j=0;
    }
    for(int i=0;i<count;i++)
    {
        printf("%s\n",b[i].rules1);
    }
    return count;
}
int main()
{
    int n;
    struct node a[100];
    struct node b[100];
    struct node c[100];
    printf("Enter the number of queries :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i].rules);
    }
    int m=MadeRules(a,b,n);
    int p=RemoveLeftRecursion(b,c,m-n);
    for(int i=0;i<p;i++)
    {
        printf("%s\n",c[i].RmvLftRec);
    }
    return 0;
}