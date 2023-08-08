//No Argument with Return Type
#include <stdio.h>
void sum(void);
void sub(void);
void multy(void);
void division(void);
void main()
{
    char operator;
    printf("HELLO !! I AM CALCULATOR,YOU CAN DO ANY MATHS MANUPULATION WITH ME..\n");
    printf("Enter two number")
    scanf("%c",&operator);
    if(operator=="+"){
        sum();
    }
    if(operator=="-"){
        sub();
    }
    if(operator=="*"){
        multy();
    }
    if(operator=="/"){
        division();
    }
}
int sum()
{
    
    return a+b;
}
