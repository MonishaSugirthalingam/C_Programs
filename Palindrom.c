#include <stdio.h>
int main()
{
    int num,original,remainders,reversed=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
       remainders=num%10;
       reversed=reversed*10+remainders;
       num=num/10;
    }
    if(original==reversed)
    {
        printf("The given number %d is Palindrom",original);
    }
    else{
         printf("The given number %d is Not a Palindrom",original);
    }
}
