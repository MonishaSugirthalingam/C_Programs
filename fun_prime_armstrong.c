#include <stdio.h>
#include <math.h>
int prime(int);
int armstrong(int);
void main()
{
    int x;
    printf("Enter the number : \n");
    scanf("%d",&x);
    prime(x);
    armstrong(x);
}
int prime(int x)
{
    int a,count=0;
    for(a=1;a<=x;a++){
        if(x%a==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("The given numbers %d is a prime number\n",x);
    }
    else{
        printf("The given number %d is not a prime number\n",x);
    }
}
int armstrong(int x)
{
    int rem,copy,sum=0,count=0,copy1;
    copy1=x;
    while(copy1!=0){
        copy1=copy1/10;
        count++;
    }
    copy=x;
    while(copy!=0){
        rem=copy%10;
        copy=copy/10;
        sum=sum+pow(rem,count);
    }
    if (sum==x){
        printf("The given nymber %d is a Armstrong number\n",x);
    }
    else{
        printf("The given number %d is not a Armstrong number\n",x);
    }
}
