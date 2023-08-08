/*DISPLAY THE MARK WITH BONUS.BONUS IS ACCORDING TO OUR MARK*/
#include <stdio.h>
#include <string.h>
int main()
{
    float mark,result;
    char sub,newline;
    scanf("%f",&mark);
    scanf("%c",&newline);
    scanf("%c",&sub);
    if (mark>=80 && sub=='T'){
        result=(mark*8/100)+mark;
        printf("%.2f",result);
    }
    else if (mark>=80 && sub=='L'){
        result=(mark*6/100)+mark;
        printf("%.2f",result);
    }
    else if (mark>=60 && mark<80 && sub=='T'){
        result=(mark*6/100)+mark;
        printf("%.2f",result);
    }
    else if (mark>=60 && mark<80 && sub=='L'){
        result=(mark*4/100)+mark;
        printf("%.2f",result);
    }
    else if (mark>=40 && mark<60 && sub=='T'){
        result=(mark*4/100)+mark;
        printf("%.2f",result);
    }
    else if (mark>=40 && mark<60 && sub=='L'){
        result=(mark*2/100)+mark;
        printf("%.2f",result);
    }
    else if (mark==0){
        printf("Enter the appropriate mark");
    }
    else{
        result=mark;
        printf("%.2f",result);
    }
}