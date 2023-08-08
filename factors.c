#include <stdio.h>
int main()
{
    int a,b,count;
    printf("Enter a number : ");
    scanf("%d",&a);
    count=0;
    for(b=1;b<=a;b++)
    {
        if(a%b==0){
            count=count+1;
            printf("Factor No:%d- %d\n",count,b);
        }
    }
}