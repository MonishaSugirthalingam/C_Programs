#include <stdio.h>
#include <string.h>

int main()
{
        printf("**************************************\n");
        printf("      NAME : MONISHA.S\n");
        printf("      REG.NO : 21BCT0414\n");
        printf("**************************************\n");
    char s[100];
    printf("Enter the Sentence : ");
    scanf("%[^\n]s", s);
    printf("\n");
    for(int i=0;i<strlen(s);i++)
    {
        if(s[0]=='/')//if first character is '/' then the sentence may or maynot be comment otherwise not a comment
        {
                if(s[i]=='/' && s[i+1]=='*')//for multi line comment
                {
                        int c=0;
                        while(c!=1 && i!=strlen(s))
                        {
                                if(s[i]=='*' && s[i+1]=='/')
                                {
                                        c=1;
                                }
                                else
                                {
                                            i++;
                                }
                        }
                        if(c==1)//if c==1 then that is multi line comment otherwise not a comment
                        {
                                printf("Given Sentence is a Multi-line Comment");
                                break;
                        }
                        else
                        {
                                printf("Given Sentence is Not a Comment");
                                break;
                        }
                }
                if(s[i]=='/' && s[i+1]=='/')//if so then single line comment otherwise not a comment
                {
                        printf("Given Sentence is a Single-line Comment");
                        break;
                }
                else
                {
                         printf("Given Sentence is Not a Comment");
                        break;
                }
                
        }
        else
        {
                printf("Given Sentence is Not a Comment");
                break;
        }
    }
    return 0;
}
