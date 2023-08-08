#include <stdio.h>
int main()
{
    int num,square,s;
    do{
        if(s==2)
        {
            break;
        }
        printf("Enter the number");
        scanf("%d",&num);
        square=num*num;
        printf("Square of the number %d is %d\n",num,square);
        printf("If you want to continue then press 1 else press 2\n");
        scanf("%d",&s);
    }
    while(s>=1);
    return 0;
}