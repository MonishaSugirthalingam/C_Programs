#include <stdio.h>
#include <string.h>
char stk[100];
char symstk[100];
char ip[100];
int ptr=0;
int top=-1,top1=-1;
int map(char a)
{
    switch (a)
    {
        case '+' : 
            return 0;
        case '*' :
             return 1;
        case '(' :
            return 2;
        case ')' :
             return 3;  
        case '^' :
             return 4;
        case '/' :
            return 5;
        case '$' :
            return 7;
        default :
             return 6;  
    }
}
int flag=0;
int main()
{
    char table[10][10] ={
        /* +    *   (     )   ^    /   id   $ */
/* + */ {'>', '>', '<', '>', '<', '>', '<', '>'},
/* * */ {'>', '>', '<', '>', '<', '>', '<', '>'},
/* ( */ {'<', '<', '<', '=', '<', '<', '<', ' '},
/* ) */ {'>', '>', ' ', '>', '>', '>', ' ', '>'},
/* ^ */ {'>', '>', '<', '>', '>', '>', '<', '>'},
/* / */ {'>', '>', '<', '>', '>', '>', '<', '>'},
/* id */ {'>', '>', ' ', '>', '<', '>', ' ', '>'},
/* $ */ {'<', '<', '<', ' ', '<', '<', '<', '='}};

printf("Enter the String : ");
scanf("%s",ip);
int len=strlen(ip);
ip[len++]='$';
ip[len]='\0';
stk[++top]=symstk[++top1]='$';
printf("%-20s\t%-20s\t%-20s\t%-20s\n","STACK","INPUT","SYMBOL_STACK","IPUT_BUFFER");
while(1)
{
    char ch=symstk[top1];
    char ch1=ip[ptr];
    char op=table[map(ch)][map(ch1)];
    printf("%-20.*s\t%-20.*s\t%-20c\t%-20c\n",top+1,stk,len-ptr,ip+ptr,ch,ch1);
    if(ch=='$' && ch1=='$')
    {
        flag=1;
        break;
    }
    else if(op=='<' || op=='=')
    {
        stk[++top]=ch1;
        symstk[++top1]=ch1;
        ptr++;
    }
    else if(op=='>')
    {
        if(map(ch)==6)
        {
            stk[top]='E';
            --top1;
        }
        else
        {
            top=top-2;
            stk[top]='E';
            top1=top1-(ch=='('?2:1);
        }
    }
    else if(op==' ')
    {
        break;
    }
}
if(flag==1)
{
    printf("Accepted\n");
}
else{
    printf("Not Accepted\n");
}
return 0;
}