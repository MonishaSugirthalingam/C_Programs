// Online C compiler to run C program online
#include <stdio.h>
int displaystudentswithmarks(int *arr,int n,int m)
{
   int i,j;
   for(i=0;i<n;i++){
       printf("Student[%d] secures below marks\n",i);
        for(j=0;j<m;j++){
            printf("Subject[%d]",*arr[i][j]);
        }
    }  
}
int main() {
    int m,n,i,j,arr[50][50];
    printf("Enter the Number of Students : ");
    scanf("%d",&n);
    printf("Enter the Number of Subjects : ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    displaystudentswithmarks(&arr,n,m);
    return 0;
}