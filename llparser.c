#include <stdio.h>
#include <string.h>
char pro[10][10];
int count=0;
int main()
{
    int n;
    printf("Enter the number of Productions : ");
    scanf("%d",&n);
    char rules[100],line;
    scanf("%c",&line);
    char temp[10];
    for(int i=0;i<n;i++)
    {
        scanf("%s",rules);
        char *token = strtok(rules, "|");
        char left=token[0];
        strcpy(pro[count],token);
        printf("%s\n",pro[count]);
        count++;
        while(token!=NULL)
        {
            token=strtok(NULL,"|");
            strcpy(temp,"");
            strncat(temp,&left,1);
            strcat(temp,"->");
            strcat(temp,token);
            strcpy(pro[count],temp);
            printf("%s\n",pro[count]);
            count++;
        }
    }
}