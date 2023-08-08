#include <stdio.h>
void inserting();
void deleting();
void searching();
void display();
int static top=0;
int static n=5;
struct ordered_list
{
    int arr[50];
}s;
int main()
{
    int num;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s.arr[i]);
    }
    printf("If you want insert any items then PRESS-1 Or If you want delete any items then PRESS-2 Or If you want to search any items then PRESS-3 Or If you want to display the elements then PRESS-4 Or If you want to stop the compiler then PRESS-5\n");
    printf("Enter your choice\n");
    scanf("%d",&num);
    while(num!=5)
    {
    if(num==1)
    {
        inserting();
    }
    if(num==2)
    {
        deleting();
    }
    if(num==3)
    {
        searching();
    }
    if(num==4)
    {
        display();
    }
    printf("Enter your choice\n");
    scanf("%d",&num);
    }
}
void inserting()
{
    int index,value,oldvalue;
    printf("Enter the index position and value :");
    scanf("%d%d",&index,&value);
    if(index>=n)
    {
       printf("STACK IS FULL"); 
    }
    else{
        top++;
       for(int i=index;i<=5;i++)
       {
        oldvalue=s.arr[i];
        s.arr[i]=value;
        value=oldvalue;
       } 
    }
    
}
void deleting()
{
    int index;
    if((top+n)==0)
    {
        printf("STACK UNDERFLOW\n");
    }
    else{
    top--;
    printf("Enter the index of the deleting number :");
    scanf("%d",&index);
    for(int i=index;i<top+n;i++)
    {
        s.arr[i]=s.arr[i+1];
    }
    }
}
void searching()
{
    int value,count=0;
     if((top+n)==0)
    {
        printf("STACK UNDERFLOW\n");
    }
    else{
        printf("Enter the searching element :");
        scanf("%d",&value);
        for(int i=0;i<top+n;i++)
        {
            if(s.arr[i]==value)
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("Yes, Number %d is there !!\n",value);
        }
        else{
            printf("No..Number %d is not in the array\n",value);
        }
    }
}
void display()
{
    if((top+n)==0)
    {
        printf("STACK IS EMPTY\n");
    }
    else{
    for(int i=(top+n)-1;i>=0;i--){
        printf("%d\t",s.arr[i]);
    }
    printf("\n");
    }
}