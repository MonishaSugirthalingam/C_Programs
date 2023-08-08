// Online C compiler to run C program online
#include <stdio.h>
int sums(int *x,int *y)
{
    printf("%d\n",*x+*y) ;
    return *x+*y;
}
int main() {
    int a=10,b=20,re;
    re=sums(&a,&b);
    printf("%d",re);
    return 0;
}