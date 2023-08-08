#include <stdio.h>
int main()
{
    int arr[50],len,i,j,temp;
    printf("Enter a length of the array : ");
    scanf("%d",&len);
    printf("Enter the each element one by one\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Maximun of the array element %d: \n",arr[0]);
    printf("Minimum of the array element %d: \n",arr[len-1]);
}
