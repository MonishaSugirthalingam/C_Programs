
/*AIM  : C programming to generate Armstrong number between 0 and 999
AUTHOR : MONISHA.S
DATE   : 23-01-2022
*/
#include <stdio.h>
void main()
{
   int num,copynum,sumofnum,fun;
   printf("The Armstrong numbers between 0 and 999\n");
   for(num=0;num<=999;num++)
   {
     sumofnum=0;
     copynum=num;
     while(copynum)
     {
         fun=copynum%10;
         copynum=copynum/10;
         sumofnum=sumofnum+(fun*fun*fun);
     }
     if(sumofnum==num)
     {
         printf(" %d is a Armstrong Number\n",sumofnum);
     }
   }
}