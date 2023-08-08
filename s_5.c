/*To find the value of the following series
1/1!+2/2!+3/3!+...
*/
#include <stdio.h>
float funfaraction(int num)
{
    int i,multy=1,j;
    float sum=0;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++){
            multy=multy*j;
        }
        sum=sum+((float)i/(float)multy);
        multy=1;
    }
    return sum;
}
int main()
{
    int num;
    float sum;
    printf("Enter a limit of the number :");
    scanf("%d",&num);
    sum=funfaraction(num);
    printf("%f",sum);
    return 0;
}