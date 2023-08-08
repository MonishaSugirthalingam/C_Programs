/*AIM  : A C program to insert an element in an array using pointers.
AUTHOR : MONISHA.S
DATE   : 28-03-2022
*/
#include <stdio.h>
int main()
{
    int i,j,len,arr[20],position,integer,*p,newarr[10],*q,occ,k;
    p=arr;
    q=newarr;
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
       scanf("%d",&arr[i]);
    }
    scanf("%d %d",&integer,&position);
    for(i=0;i<position;i++)
    {
        *(q+i)=*(p+i);
    }
    *(q+i)=integer;
    occ=len-position;
    k=i+1;
    for(j=k;j<=k+occ;j++)
    {
        *(q+j)=*(p+i);
        i=i+1;
    }
    for(i=0;i<len+1;i++)
    {
       printf("%d ",*(q+i));
    }
    return 0;
}