//AIM : A Cprogram to split an Array from specified position ans add first part to the end
//EX:
//INPUT: 1 2 3 4 5
//POSITION : 2
//OUTPUT   : 3 4 5 1 2
#include <stdio.h>

int main() {
    int arr[50],len,i,occ,item[50],newa[50],count;
    printf("Enter a length of the array \n");
    scanf("%d",&len);
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a occurance : ");
    scanf("%d",&occ);
    for(i=0;i<occ;i++){
        item[i]=arr[i];
    }
    count=0;
    for(i=0;i<len;i++){
        if(item[i]!=arr[i]){
            newa[count]=arr[i];
            count=count+1;
        }
    }
    for(i=0;i<occ;i++){
        newa[(len-occ)+i]=item[i];

    }
    for(i=0;i<len;i++){
        printf("%d ",newa[i]);
    }
    return 0;
}