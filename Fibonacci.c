/*AIM  : Generate Fibonacci Series for n numbers
AUTHOR : MONISHA.S
DATE   : 23-02-2022
*/

#include <stdio.h>
int main()
{
    int series,num1,num2,count;
    printf("Enter the serial number for known values of fibonacci numbers till that limit : ");
    scanf("%d",&series);
    num1=1;
    num2=1;
    count=0;
    printf("The Fibonacci series, till the serial number %d\n",series);
    printf("%d\n%d\n",num1,num2);
    while(count<series)
    {
        count=num1+num2;
        num1=num2;
        num2=count;
        printf("%d\n",count);
    }
}