#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool flag=false;
int choice;
int cwnd=1;
int th;
int c=0;
void segments();
int main()
{
    printf("Enter the Threshold value : ");
    scanf("%d",&th);
    segments();
    return 0;
}
void segments()
{
    printf("Segments Send/Not? (Yes for 1/No for 2) : ");
    scanf("%d",&choice);
    while(choice!=0)
    {
    if(choice==1)
    {
        printf("Acknowledgement Received or Not (Yes for 1/No for 2) : ");
        scanf("%d",&choice);
        if(choice==1)
        {
            if(cwnd>th || flag==true || pow(2,c)>th)
            {
                flag=true;
                printf("Currently Congestion Avoidance Phase\n");
                cwnd=cwnd+1;
                printf("cwnd : %d th : %d\n",cwnd,th);  
            }
            else
            {
            
                cwnd=pow(2,c);
                c++;
                printf("Currently in Slow state Phase\n");
                printf("cwnd : %d th : %d\n",cwnd,th);
            }
        }
        else
        {
            printf("Reason of Acknowledgement Failure\n1.Sever Congestion(due to Timeout)\n2.Mild Congestion(due to 3 ACK Duplicates)\n");
            printf("Enter your choice : ");
            scanf("%d",&choice);
            if(choice==1)
            {
                th=cwnd/2;
                cwnd=1;
                c=0;
                flag=false;
                printf("Needs to Resend..!!\n");
            }
            else
            {
                th=cwnd/2;
                cwnd=th;
                flag=true;
                printf("Needs to Resend..!!\n");
            }
        }
    }
    else
    {
        printf("Terminated...!!!\n");
        break;
    }
    printf("Segments Send/Not? (Yes for 1/No for 2) : ");
    scanf("%d",&choice);
    }
}