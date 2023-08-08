#include<stdio.h> 
void main()
{
    int operator,x,y,z;
    printf("\nIf you want add the number press 1");
    printf("\nIf you want add the number press 2");
    printf("\nIf you want add the number press 3");
    printf("\nIf you want add the number press 4");
    printf("\nEnter your choice :");
    scanf("%d",&operator);
    switch(operator)
    {
        case 1:
        printf("Enter 1st number :");
        scanf("%d",&x);
        printf("Enter 2nd number :");
        scanf("%d",&y);
        z=x+y;
        printf("Sum of two numbers :%d",z);
        break;
        case 2:
        printf("Enter 1st number :");
        scanf("%d",&x);
        printf("Enter 2nd number :");
        scanf("%d",&y);
        z=x-y;
        printf("Sum of two numbers :%d",z);
        break;
        case 3:
        printf("Enter 1st number :");
        scanf("%d",&x);
        printf("Enter 2nd number :");
        scanf("%d",&y);
        z=x*y;
        printf("Sum of two numbers :%d",z);
        break;
        case 4:
        printf("Enter 1st number :");
        scanf("%d",&x);
        printf("Enter 2nd number :");
        scanf("%d",&y);
        z=x/y;
        printf("Sum of two numbers :%d",z);
        break;
         

    }
   
        
}
