/* AIM : A C program to compute the power consumption cost of a home. Use functions (call by value)
AUTHOR : MONISHA.S
DATE   : 15-03-2022
*/
#include <stdio.h>
int scheme1(int);
int scheme2(int);
int scheme3(int);
int main()
{
   int charge;
   scanf("%d",&charge);
   if(charge>=0 && charge<=100){
       scheme1(charge);
   }
   if(charge>=101 && charge<=200){
       scheme2(charge);
   }
   if(charge>=201 && charge<=500){
       scheme3(charge);
   }
   return 0;
}
int scheme1(int charge)
{
    charge=(charge*1)+50;
    printf("%d",charge);
    return 0;
}
int scheme2(int charge)
{
    int a,b,c;
    a=charge-100;
    b=a*3;
    c=(100*2)+b+100;
    printf("%d",c);
    return 0;
}
int scheme3(int charge)
{
    int x,y;
    x=charge-200;
    y=(x*5)+(100*4)+(100*3)+200;
    printf("%d",y);
    return 0;
}