#include <stdio.h>
int reversingfun(int[],int);
int main()
{
    int arr[50],a,len;
    printf("Enter a length of the array :\n");
    scanf("%d",&len);
    printf("Enter a array elements one by one :");
    for(a=0;a<len;a++){
        scanf("%d",&arr[a]);
    }
    reversingfun(arr,len);
    
}
int reversingfun(int p[],int len)
{
    int a;
    for(a=len-1;a>=0;a--){
        printf("%d\n",p[a]);
    }
}