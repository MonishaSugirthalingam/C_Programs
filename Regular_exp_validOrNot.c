#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
        FILE *fptr;
        char ch[100];
        char a[]="a";
        char b[]="a*b+";
        char c[]="abb";
        char exps[100][100];
        int count=0;
        fptr=fopen("21BCT0414.txt","r");
        while(fgets(ch,100,fptr))
        {
             ch[strlen(ch)-1]='\0';
            strcpy(exps[count],ch);
            count++;
        }
        int flag=0,pass=0,pass1=0;
        for(int i=0;i<count;i++)
        {            
                      if(strlen(exps[i])==1 || strlen(exps[i])==3)
                      
                        {
                             
                              if(strcmp(exps[i],a)==0)
                              {
                                      flag=1;
                              }
                              if(strcmp(exps[i],c)==0)
                              {
                                      flag=1;
                              }
                       }
                     
                        if(exps[i][0]=='b')
                        {
                                for(int k=0;k<strlen(exps[i]);k++)
                                {
                                        if(exps[i][k]=='b')
                                        {
                                               pass1++;
                                        }
                                }
                                if(pass1==strlen(exps[i]))
                                {
                                        flag=1;
                                }
                        }
                             
                      if(exps[i][0]=='a')
                      {
                             int len=strlen(exps[i]);
                              while(pass!=len)
                              {
                                      if(exps[i][pass]=='a')
                                      {
                                              pass++;
                                      }
                                      else
                                      {
                                              break;
                                      }
                              }
                              if(exps[i][pass]=='b')
                              {
                                      while(pass!=len)
                                      {
                                              if(exps[i][pass]=='b')
                                              {
                                                      pass++;
                                              }
                                              else
                                              {
                                                      break;
                                              }
                                      }
                              }
                              if(len==pass)
                              {
                                      flag=1;
                              }
                      }
                      if(flag==0)
                      {
                              printf("%s is Rejected\n",exps[i]);
                      }
                      else
                      {
                              printf("%s is Accepted\n",exps[i]);
                      }
                      flag=0;
                      pass=0;
                      pass1=0;
                
        }
}