#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool checkcons(char a[])
{
        if(strlen(a)>10)
        {
                return false;
        }
        for(int i=0;i<strlen(a);i++)
        {
                if(a[i]=='$' || a[i]=='@' || a[i]=='#' || a[i]=='&' || a[i]=='^' || (a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=127))
                {
                        return false;
                }
        }
        return true;
}
bool checkiden(char a[])
{
        if(strlen(a)>15)
        {
                return false;
        }
        if(a[0]=='0' || a[0]=='1' || a[0]=='2' || a[0]=='3' || a[0]=='4' || a[0]=='5' || a[0]=='6' || a[0]=='7' || a[0]=='8' || a[0]=='9')
        {
                return false;
        }
        for(int i=0;i<strlen(a);i++)
        {
                if(a[i]=='$' || a[i]=='@' || a[i]=='#' || a[i]=='&' || a[i]=='^')
                {
                        return false;
                }
        }
        return true;
}
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
        printf("Identifier/Constant\t\tValue/Name\t\tValid/Invalid\n\n\n");
        for(int i=0;i<count;i++)
        {
                for(int j=0;j<strlen(arr[i]);j++)
                {
                        if(arr[i][j]=='"' || (arr[i][j]=='/' && arr[i][j+1]=='*'))//for comments
                        {
                           j++;
                           while(flag!=1)
                           {
                                if(arr[i][j]!='/')
                                {
                                j++;    
                                }
                                else
                                {
                                flag=1;
                                }
                           }
                           flag=0;
                        }
                         if(arr[i][j]=='/' && arr[i][j]=='/')
                        {
                           j++;
                           while(flag!=1)
                           {
                                 if(arr[i][j]!=10)
                                {
                                j++;    
                                }
                               else
                               {
                                flag=1;
                              }
                           } 
                           flag=0;
                        }
                        if(arr[i][j]=='=')
                        {
                                j++;
                                while(flag!=1)
                                {
                                        
                                }
                                
                        }
                        if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122) || arr[i][j]=='.' || arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9' || arr[i][j]=='@' || arr[i][j]=='$' || arr[i][j]=='&' || arr[i][j]=='^')// For variables(identifiers) and Keywords
                        {
                                int flag=0;
                                char temp[10];
                                strcpy(temp,"");
                                while(flag!=1) //it goes till end of identifier or keyword
                                {
                                        if((arr[i][j]>=65 && arr[i][j]<=90) || (arr[i][j]>=97 && arr[i][j]<=122) || arr[i][j]=='.' || arr[i][j]=='0' || arr[i][j]=='1' || arr[i][j]=='2' || arr[i][j]=='3' || arr[i][j]=='4' || arr[i][j]=='5' || arr[i][j]=='6' || arr[i][j]=='7' || arr[i][j]=='8' || arr[i][j]=='9' || arr[i][j]=='@' || arr[i][j]=='$' || arr[i][j]=='&' || arr[i][j]=='^')
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
                                               // printf("Keyword : %s\n",temp);
                                                k=1;
                                        }

                                }
                                for(int i=0;i<3;i++)//If the string present in operators array then it is operator
                                {
                                        if(strcmp(operators[i],temp)==0)
                                        {
                                                //printf("Operator : %s\n",temp);
                                                k=1;
                                        }

                                }
                                int len=j-strlen(temp)-1;
                                if(arr[i][len]=='=' || arr[i][j-2]==' ')
                                {
                                        k=1;
                                        if(checkcons(temp)==true)
                                        {
                                              printf("Constant\t\t\t%s\t\t\t\tValid\n\n",temp);
                                        }
                                        else
                                        {
                                              printf("Constant\t\t\t%s\t\t\t\tInvalid\n\n",temp);   
                                        }
                                } 
                                if(k==0)//otherwise identifier
                                {
                                        if(checkiden(temp)==true)
                                        {
                                              printf("Identifier\t\t\t%s\t\t\t\tValid\n\n",temp);
                                        }
                                        else
                                        {
                                              printf("Identifier\t\t\t%s\t\t\t\tInvalid\n\n",temp);   
                                        } 
                                }
                                k=0;
                                flag=0;
                                strcpy(temp,"");
                        }
                        
                }
        }
        
}