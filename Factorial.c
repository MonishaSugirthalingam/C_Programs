#include <stdio.h>
int main()
{
    int fac=1,a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        fac=fac*b;
    }
    printf("Factorial of %d is %d : ",a,fac);
}
