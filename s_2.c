/* Write a C program to receive value of an angle in degrees 
and check whether sum of squares of sine and cosine of this angle is equal to 1*/
#include <stdio.h>
#include <math.h>
int main()
{
    double degree;
    printf("Enter a degree: ");
    scanf("%lf",degree);
    int sum=(sin(degree)*sin(degree))+(cos(degree)*cos(degree));
    if(sum==1)
    {
        printf("Sum of squares of sine and cosine of this angle is equal to 1");
    }
    else{
        printf("Sum of squares of sine and cosine of this angle is NOT equal to 1");
    }
    return 0;
}
