

#include <stdio.h>
void push();
void pop();
void display();
int static top=0;
int static n=5;
struct stacking
{
    int stac[5];
}arr;
int main()
{
    int num=0;
    
    printf("If you want push any items then PRESS-1 Or If you want pop any items then PRESS-2 Or If you want to display the array items then PRESS-3 Or If you want to stop the compiler then PRESS-4\n");
    printf("Enter your choice\n");
    scanf("%d",&num);
    while(num!=4)
    {
    if(num==1)
    {
        push();
    }
    if(num==2)
    {
        pop();
    }
    if(num==3)
    {
        display();
    }
    printf("Enter your choice\n");
    scanf("%d",&num);
    }
    return 0;
}
void push()
{
    int a,ele,cal=0;
    printf("how many elements do you want to push? ");
    scanf("%d",&ele);
    cal=top+ele;
    if(cal<5)
    {
    printf("Enter the %d elements :",ele);
    for(int i=0;i<ele;i++)
    {
        scanf("%d",&arr.stac[top]);
        top++;
    }
    }
    else{
        printf("STACK IS FULL\n");
    }
}
void pop()
{
    if(top==0)
    {
        printf("STACK IS EMPTY\n");
    }
    else{
    top=top-1;
    }
}
void display()
{
    if(top==0)
    {
        printf("STACK IS EMPTY\n");
    }
    else{
    for(int i=top-1;i>=0;i--){
        printf("%d\t",arr.stac[i]);
    }
    printf("\n");
    }
}
