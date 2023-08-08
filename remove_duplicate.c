#include <stdio.h>
int main()
{
    int n,i,j,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=1000;
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=1000)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
