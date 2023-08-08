#include <stdio.h>
int main()
{
    char a[50][50]={"boll","apple"},temp[50];
    int i, j;
    for(i=0;i<2;i++){
        for(j=i+1;j<2;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(i=0;i<2;i++){
        printf("%s",a[i]);
    }
}
