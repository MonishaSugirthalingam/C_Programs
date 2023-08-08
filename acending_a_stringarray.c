/*AIM   :  Program to sort a string array in ascending order
AUTHOR  :  MONISHA.S
DATE    :  01-03-2022
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char array[50];
    int a,length,upperocc[50],lowerocc[50],i=0,j=0,b,out,in,temp;
    printf("Enter a string \n");
    gets(array);
    length=strlen(array);
    for(a=0;a<length;a++)
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
    for(out=0;out<i;out++){
        for(in=out+1;in<i;in++){
            if(upperocc[out]>upperocc[in]){
                temp=upperocc[out];
                upperocc[out]=upperocc[in];
                upperocc[in]=temp;
            }
        }
    }
    for(out=0;out<j;out++){
        for(in=out+1;in<j;in++){
            if(lowerocc[out]>lowerocc[in]){
                temp=lowerocc[out];
                lowerocc[out]=lowerocc[in];
                lowerocc[in]=temp;
            }
        }
    }
    printf("After arranging the accending order :");
    for(out=0;out<i;out++){
        printf("%c",upperocc[out]);
    }
    for(out=0;out<i;out++){
        printf("%c",lowerocc[out]);
    }

}