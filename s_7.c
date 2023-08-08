//i=2+(y+0.5x)
//where y various from 1 to 6 and every y value,x varies from 5.5 to 12.5
#include <stdio.h>
int main()
{
    float x,y,i;
    for(x=5.5;x<=12.5;x=x+0.5)
    {
        for(y=1;y<=6;y++)
        {
            i=2+(y+(0.5*x));
            printf("2 + (%.2f + 0.5 x %.2f) = %.2f\n",y,x,i);
        }
    }
    return 0;
}