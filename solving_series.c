/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    //(1/3)-(3/9)+(9/81)-....N
    int num,a;
    float multy1=1,multy2=3,result,sum1=0,sum2=0;
    printf("Enter the limit of the Series : ");
    scanf("%d",&num);
    for(a=0;a<=num+1;a++){
        if(a%2==0){
            sum1=sum1+(multy1/multy2);
        }
        else{
            sum2=sum2+(multy1/multy2);
        }
        multy1=multy1*3;
        multy2=multy2*multy2;
    }
    result=sum1-sum2;
    printf("The Solution of the given Series is :%f",result);
    
}
