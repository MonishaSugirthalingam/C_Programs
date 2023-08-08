#include <stdio.h>
int TimeLimit=5;
int frame=0;
void timeout();
void duetoframe();
void duetoack();
void sender();
void framefun();
int frameack();

int main()
{
    sender();
    return 0;
}
int frameack()
{
    if(frame==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void framefun()
{
    if(frame==0)
    {
        frame=1;
    }
    else
    {
        frame=0;
    }
}
void timeout()
{
    int r;
    char line;
    printf("Time Out...!!!");
    printf("Press 1 for Reason-1 || Press 2 for Reason-2\n");
    printf("1.Due to Acknowledgement Lost\n");
    printf("2.Due to Frame Lost\n");
    printf("Enter the Reason : ");
    scanf("%d",&r);
    scanf("%c",&line);
    if(r==1)
    {
        duetoack();
    }
    else
    {
        duetoframe();
    }
}
void duetoframe()
{
    int t;
    char input,line;
    
    printf("Sender : Resend/Not? (Y/N) : ");
    scanf("%c",&input);
    if(input=='Y' || input=='y')
    {
        printf("Enter the Time Limit for Receiving the Data : ");
        scanf("%d",&t);
        scanf("%c",&line);
        if(t<=TimeLimit)
        {
            framefun();
            printf("The Receiver Receive the frame %d\n",frame);
            printf("Receiver Acknowledgement is %d\n",frameack());
            sender();
        }
        else
        {
            timeout();
        }
    }
    else
    {
        printf("Terminated...!!!\n");
    }
}
void duetoack()
{
    int t;
    char input,line;
    
    printf("Sender : Resend/Not? (Y/N) : ");
    scanf("%c",&input);
    if(input=='Y' || input=='y')
    {
        printf("Enter the Time Limit for Receiving the Data : ");
        scanf("%d",&t);
        scanf("%c",&line);
        if(t<=TimeLimit)
        {
            printf("The Receiver simply discard the frame(Because Already Received) %d\n",frame);
            printf("Receiver Acknowledgement is %d\n",frameack());
            sender();
        }
        else
        {
            timeout();
        }
    }
    else
    {
        printf("Terminated...!!!\n");
    }
}
void sender()
{
    char input,line;
    int t;
    printf("Sender: Send/Not? (Y/N) : ");
    scanf("%c",&input);
    if(input=='Y' || input=='y')
    {
        printf("Enter the Time Limit for Receiving the Data : ");
        scanf("%d",&t);
        scanf("%c",&line);
        if(t<=TimeLimit)
        {
            framefun();
            printf("The Receiver Receive the frame %d\n",frame);
            printf("Receiver Acknowledgement is %d\n",frameack());
            sender();
        }
        else
        {
            timeout();
        }
    }
    else
    {
        printf("Terminated...!!!");
    }
}