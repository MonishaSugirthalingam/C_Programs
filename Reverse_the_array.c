#include <stdio.h>
int main()
{
    int arr[10],a,i;
    printf("How many elements did you fill that box? ");
    scanf("%d",&a);
    printf("Enter the each element one by one \n");
    for(i=0;i<a;i++)
    {
       scanf("%d",&arr[i]) ;
    }
    printf("After reversing the array\n");
    for(a=a-1;a>=0;a=a-1)
    {
       printf("%d\n",arr[a]) ;
    }
}