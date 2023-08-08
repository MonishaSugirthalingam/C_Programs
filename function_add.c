#include <stdio.h>
int addfun(); //function declaration
int main()
{
    int sum;
    sum=addfun(); //function calling
    printf("%d",sum);
    return 0;
}
int addfun() //function definition
{
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a,&b);
    return (a+b);
}