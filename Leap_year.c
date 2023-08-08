#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0)||(a%400==0 && a%100==0))
    {
        printf("%d is Leap Year",a);
    }
    else{
        printf("%d is Not a Leap Year",a);
    }
}