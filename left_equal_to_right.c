/* AIM : IF SUM OF LEFT EQUAL TO SUM OF RIGHT THEN PRINT INTEXT OF THAT NUMBER
EX:
INPUT:
5
8
1
4
3
1
OUTPUT: 1
*/
#include <stdio.h>
int main() {
    int n,i,j,arr[50],a=0,b=0,flag=0;
    printf("Enter the Number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            a=a+arr[j];
        }
        for(j=i-1;j>=0;j--){
            b=b+arr[j];
        }
        if (a==b){
            printf("%d",i);
            flag=1;
        }
        a=0;
        b=0;
    }
    if (flag==0){
        printf("%d",0);
    }
    return 0;
}