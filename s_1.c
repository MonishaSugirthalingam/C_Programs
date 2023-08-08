#include <stdio.h>
int main()
{
    float hardness,carbon,tensile;
    int sum=0,grade;
    printf("Enter a hardness,carbon content and tensile strength of the steel :");
    scanf("%f %f %f",&hardness,&carbon,&tensile);
    if(hardness>50)
    {
        sum=sum+4;
    }
    if(carbon<0.7)
    {
        sum=sum+3;
    }
    if(tensile>5600)
    {
        sum=sum+2;
    }
    switch(sum)
    {
    case 9:
        grade=10;
        printf("%d",grade);
        break;
    case 7:
        grade=9;
        printf("%d",grade);
        break;
    case 5:
        grade=8;
        printf("%d",grade);
        break;
    case 6:
        grade=7;
        printf("%d",grade);
        break;
    case 3:
        grade=6;
        printf("%d",grade);
        break;
    case 4:
        grade=6;
        printf("%d",grade);
        break;
    case 2:
        grade=6;
        printf("%d",grade);
        break;
    case 0:
        grade=5;
        printf("%d",grade);
        break;
    }
    return 0;
}