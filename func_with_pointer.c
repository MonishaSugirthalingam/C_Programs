#include <stdio.h>
int swapfun(int*,int*); //function declaration
int main()
{
   int a,b;
   printf("Enter two values : ");
   scanf("%d%d",&a,&b);
   printf("Before swapping  x=%d and y=%d\n",a,b);
   swapfun(&a,&b);
   printf("After swapping x=%d and y=%d\n",a,b);
   return 0;
}
int swapfun(int*m,int*n) //function definition
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    printf("After swapping m=%d and n=%d\n",*m,*n);
}