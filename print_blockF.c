#include <stdio.h>

int main()
{
    int row,col;
    for(row=0;row<7;row++){
       for(col=0;col<6;col++){
       if(((row==0)||(row==3 && col!=5) ||((row==1 || row==2 || row==4 ||row==5 ||row==6) && col==0))){
           printf("%s","#");
       }
       else{
           printf("%s"," ");
       }
       }
    }
}