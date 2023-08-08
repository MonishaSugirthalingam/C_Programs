/*AIM  : TO print the first n Natural Numbers
AUTHOR : MONISHA.S
DATE   : 23-01-2022
*/
#include <stdio.h>
int main()
{
    int limitofNno,count;
    printf("Enter the limit of the Natural numbers :");
    scanf("%d",&limitofNno);
    printf("The Natural Numbers till %d\n",limitofNno);
    count=1;
    do{
        printf("%d\n",count);
        count=count+1;
    }
    while(count<=limitofNno);
    return 0;
    
}