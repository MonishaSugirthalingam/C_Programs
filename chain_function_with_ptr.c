#include <stdio.h>
//to display the mark
int display_Marks(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}
//to converte ascending to descending order
int ascToDesc_Marks(int arr[],int n)
{
   int i,j,*temp=NULL;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    display_Marks(arr,n);
    return 0;
}
//Ascending the marls as per the order 
int ascending_Marks(int arr[],int n)
{
    int i,j,*temp=NULL;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    ascToDesc_Marks(arr,n);
    return 0;
}
//to creating array
int create_Array()
{
    int i,arr[50],n;
    printf("Enter a number of student :\n");
    scanf("%d",&n);
    printf("Enter a mark one by one\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    ascending_Marks(arr,n);
    return 0;
}
int main()
{
    create_Array();
    return 0;
}