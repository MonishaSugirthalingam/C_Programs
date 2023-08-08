#include <stdio.h>
int main()
{
    int r,g,b;
    float c,m,y,k,white,black,a1,b1,c1;
    scanf("%d %d %d",&r,&g,&b);
    a1=(float)r/255;
    b1=(float)g/255;
    c1=(float)b/255;
    if(a1>b1){
        if(a1>c1){
            white=a1;
        }
        else{
            white=c1;
        }
    }
    else{
        if(b1>c1){
            white=b1;
        }
        else{
            white=c1;
        }
    }
    black=1-white;
    c=((white-r)/255)/white;
    m=((white-g)/255)/white;
    y=((white-b)/255)/white;
    printf("Cyan : %.1f  Magenta : %.1f  Yellow : %.1f  Black : %.1f",c,m,y,black);
}