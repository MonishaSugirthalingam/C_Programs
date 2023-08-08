#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        printf("***************************************\n");
        printf("        NAME   : MONISHA.S\n");
        printf("        REG.NO : 21BCT0414\n");
        printf("***************************************\n");
        FILE *fptr;
        char ch[100],arr[100][100];
        int flag=0;
        int count=0;
        fptr=fopen("21BCT0414.txt","r");
        if(fptr==NULL)
        {
                printf("There is no file");
        }
        while(fgets(ch,100,(FILE*)fptr))
        {
               strcpy(arr[count],ch);
               count++;
        }
        char keyword[50][50]={"unsigned","goto","static","global","void","sizeof","continue","break","switch","case","print","endif","then","int","main","if","else","printf","scanf","elif","return","while","for","do","float","double","long","char","true","false","strcmp","strcpy","strlen","strncat","strcmp","fopen","fclose","include","stdio.h","stdlib.h","string.h"};
        char s[10];
        char operators[50][50]={"AND","OR","XOR"};
        char r[100][100];
        strcpy(s,"");
        int count1=0;
        for(int i=0;i<count;i++)
        {
                for(int j=0;j<strlen(arr[i]);j++)
                {
                        if((arr[i][j]=='/' && arr[i][j+1]=='*') || (arr[i][j]=='/' && arr[i][j+1]=='/')) //For Comment
                        {
                                int c=0;
                                while(c!=1)
                                {
                                    if((arr[i][j]=='*' && arr[i][j+1]=='/') || arr[i][j]==10)
                                    {
                                            c=1;
                                            j++;
                                            j++;
                                    }
                                    else
                                    {
                                            j++;
                                    }
                                }
                                c=0;
                        }
                        
                        if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122))// For variables(identifiers) and Keywords
                        {
                                int flag=0;
                                char temp[10];
                                strcpy(temp,"");
                                while(flag!=1) //it goes till end of identifier or keyword
                                {
                                        if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122) || arr[i][j]=='.' || arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9')
                                        {
                                        strncat(temp,&arr[i][j],1);
                                        j++;
                                        }
                                        else
                                        {
                                                flag=1;
                                        }
                                }
                                int k=0;
                                for(int i=0;i<40;i++)//If the string present in keyword array then it is keyword
                                {
                                        if(strcmp(keyword[i],temp)==0)
                                        {
                                                printf("Keyword : %s\n",temp);
                                                k=1;
                                        }

                                }
                                for(int i=0;i<3;i++)//If the string present in operators array then it is operator
                                {
                                        if(strcmp(operators[i],temp)==0)
                                        {
                                                printf("Operator : %s\n",temp);
                                                k=1;
                                        }

                                }
                                if(k==0)//otherwise identifier
                                {
                                printf("Identifier : %s\n",temp);
                                }
                                k=0;
                                flag=0;
                                strcpy(temp,"");
                        }
                        //For Delemiter
                        if(arr[i][j]=='(' || arr[i][j]==')' || arr[i][j]=='{' || arr[i][j]=='}' || arr[i][j]=='[' || arr[i][j]==']' || arr[i][j]==',' || arr[i][j]==';' || (arr[i][j]=='<' && arr[i][j+1]=='i')|| (arr[i][j]=='>' && arr[i][j+1]=='i'))
                        {
                                printf("Delimiter : %c\n",arr[i][j]);
                        }
                        //Constants
                        if(arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9')
                        {
                                int flag=0;
                                char temp[10];
                                strcpy(temp,"");
                                if(arr[i][j-1]=='-')
                                {
                                      
                                      strncat(temp,&arr[i][j-1],1); 
                                }
                                while(flag!=1)
                                {
                                        if(arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9')
                                        {
                                        strncat(temp,&arr[i][j],1);
                                        j++;
                                        }
                                        else
                                        {
                                                flag=1;
                                        }
                                }
                                j--;
                                printf("Constant : %s\n",temp);
                                flag=0;
                                strcpy(temp,"");
                        }
                        //For Operator
                        if((arr[i][j]=='-' && (arr[i][j+1]!='1' && arr[i][j+1]!='2' && arr[i][j+1]!='3' && arr[i][j+1]!='4' && arr[i][j+1]!='5' && arr[i][j+1]!='6' && arr[i][j+1]!='7' && arr[i][j+1]!='8' && arr[i][j+1]!='9'))|| arr[i][j]=='+' || arr[i][j]=='*' || arr[i][j]=='=' || arr[i][j]=='/' || arr[i][j]=='%' || arr[i][j]=='>' || arr[i][j]=='<' || arr[i][j]==':' || arr[i][j]=='?' || arr[i][j]=='&')
                        {
                                printf("Operator : %c\n",arr[i][j]);
                        }
                        if((arr[i][j]=='&' && arr[i][j+1]=='&') || (arr[i][j]=='|' && arr[i][j+1]=='|') || (arr[i][j]=='=' && arr[i][j+1]=='=' ) || (arr[i][j]=='<' && arr[i][j+1]=='<') || (arr[i][j]=='>' && arr[i][j+1]=='>') || (arr[i][j]=='+' && arr[i][j+1]=='+') || (arr[i][j]=='-' && arr[i][j+1]=='-') || (arr[i][j]=='+' && arr[i][j+1]=='=') || (arr[i][j]=='*' && arr[i][j+1]=='=') || (arr[i][j]=='/' && arr[i][j+1]=='=') || (arr[i][j]=='%' && arr[i][j+1]=='=')|| (arr[i][j]=='!' && arr[i][j+1]=='='))
                        {
                                char temp[10];
                                strcpy(temp,"");
                                strncat(temp,&arr[i][j],1);
                                strncat(temp,&arr[i][j+1],1);
                                j++;
                                printf("Operator : %s\n",temp);
                                strcpy(temp,"");
                        }
                        if(arr[i][j]=='"')
                        {
                                j++;
                               if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122))//variables
                                {
                                int flag=0;
                                char temp[10];
                                strcpy(temp,"");
                                strncat(temp,&arr[i][j-1],1);
                                while(flag!=1)
                                {
                                        if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122 || arr[i][j]==32)  || arr[i][j]=='.' || arr[i][j]==':' || arr[i][j]==',')
                                        {
                                        strncat(temp,&arr[i][j],1);
                                        j++;
                                        }
                                        else
                                        {
                                                flag=1;
                                        }
                                }
                                strncat(temp,&arr[i][j],1);
                                printf("Constant : %s\n",temp);
                                flag=0;
                                strcpy(temp,"");
                                }
                                if(arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9')
                                {
                                int flag=0;
                                char temp[10];
                                strcpy(temp,"");
                                strncat(temp,&arr[i][j-1],1);
                                while(flag!=1)
                                {
                                        if(arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9')
                                        {
                                        strncat(temp,&arr[i][j],1);
                                        j++;
                                        }
                                        else
                                        {
                                                flag=1;
                                        }
                                }
                                strncat(temp,&arr[i][j],1);
                                printf("Constant : %s\n",temp);
                                flag=0;
                                strcpy(temp,"");
                                }
                                
                         
                        }
                        
                        
                }
        }
        
}