/*AIM  : C programming to check whether the given number is odd or even
AUTHOR : MONISHA.S
DATE   : 23-01-2022
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The given number %d is a even number",a);
    }
    else{
        printf("The given number %d is a odd number",a);
    }

}