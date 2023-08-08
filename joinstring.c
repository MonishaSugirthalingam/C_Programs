#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10][10];
    int a,len,i,j;
    for(a=0;a<2;a++){
        scanf("%s",&arr[a]);
    }
    for(a=0;a<2;a++){
        for(i=0;i<strlen(arr[a]);i++){
            printf("%c",arr[a][i]);
        }
    }
}
