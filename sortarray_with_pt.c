#include <stdio.h>
int main() 
{        
    int arr[10]={101,3,4,34,67,12,0,45,76,25},i,j,*q,temp;
    int *p=arr;
    for(p=&arr[0];p<&arr[9];p++)
    {
       for(q=p+1;q<&arr[9];q++){
           if(*p>*q){
               temp=*p;
               *p=*q;
               *q=temp;
           }
       }
    }
    for(p=&arr[0];p<&arr[9];p++)
    {
        printf("%d\n",*p);
    }
    
}