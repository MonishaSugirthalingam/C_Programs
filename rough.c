/*AIM   :  Program to sort a string array in ascending order
AUTHOR  :  MONISHA.S
DATE    :  01-03-2022
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char array[50];
    int a,length,upperocc[50],lowerocc[50],i=0,j=0,b;
    printf("Enter a string \n");
    scanf("%s",array);
    for(a=0;a<8;a++)
    {
        if(array[a]>=65 && array[a]<=90){
            upperocc[i]=(int)array[a];
            i++;
        }
        if(array[a]>=97 && array[a]<=122){
            lowerocc[j]=(int)array[a];
            j++;
        }
    }
    for(a=i;a>=0;a--)
    {
        for(b=0;b<a;b++){
            if(upperocc[b]>upperocc[b+1]){
                upperocc[b],upperocc[b+1]=upperocc[b+1],upperocc[b];
            }
        }
    }
    for(a=j;a>=0;a--)
    {
        for(b=0;b<a;b++){
            if(lowerocc[b]>lowerocc[b+1]){
                lowerocc[b],lowerocc[b+1]=lowerocc[b+1],lowerocc[b];
            }
        }
    }
    for(a=0;a<i;a++){
        printf("%d\n",upperocc[a]);
    }
    for(a=0;a<j;a++){
        printf("%d\n",lowerocc[a]);
    }
}