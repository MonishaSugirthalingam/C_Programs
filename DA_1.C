#include <stdio.h>
#include <string.h>
int main() {
    char row[10];
    int i,j,a,p=0,q=0,r=0,ans1[10],arr[10][10],count=0,sum1=0,sum2=0,sum3=0,sum4=0,cost,total;
    for(i=0;i<3;i++){
        fgets(row,sizeof row,stdin);
        if(i==0){
            for(j=0;j<strlen(row);j++){
                if((int)(row[j])>=48){
                    arr[i][count]=((int)(row[j]))-48;
                    a=((int)(row[j]))-48;
                    p=p+(a*100);
                    count=count+1;
                }
            }ans1[i]=p;
        }count=0;
        if(i==1){
            for(j=0;j<strlen(row);j++){
                if((int)(row[j])>=48){
                    arr[i][count]=((int)(row[j]))-48;
                    a=((int)(row[j]))-48;
                    q=q+(a*150);
                    count=count+1;
                }
            }ans1[i]=q;
        }count=0;
        if(i==2){
            for(j=0;j<strlen(row);j++){
                if((int)(row[j])>=48){
                    arr[i][count]=((int)(row[j]))-48;
                    a=((int)(row[j]))-48;
                    r=r+(a*50);
                    count=count+1;
                }
            }ans1[i]=r;
        }
    }
    for(i=0;i<3;i++){
        printf("%d ",ans1[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           if (j==0){
               if(i==0){
                   cost=100;
               }
               if(i==1){
                   cost=150;
               }
               if(i==2){
                   cost=50;
               }
               sum1=sum1+(arr[i][j]*cost);
           }
           if (j==1){
               if(i==0){
                   cost=100;
               }
               if(i==1){
                   cost=150;
               }
               if(i==2){
                   cost=50;
               }
               sum2=sum2+(arr[i][j]*cost);
           }
           if (j==2){
               if(i==0){
                   cost=100;
               }
               if(i==1){
                   cost=150;
               }
               if(i==2){
                   cost=50;
               }
               sum3=sum3+(arr[i][j]*cost);
           }
           if (j==3){
               if(i==0){
                   cost=100;
               }
               if(i==1){
                   cost=150;
               }
               if(i==2){
                   cost=50;
               }
               sum4=sum4+(arr[i][j]*cost);
           }
        }
    }
    printf("\n");
    printf("%d ",sum1);
    printf("%d ",sum2);
    printf("%d ",sum3);
    printf("%d ",sum4);
    printf("\n");
    total=sum1+sum2+sum3+sum4;
    printf("%d",total);
    return 0;
}