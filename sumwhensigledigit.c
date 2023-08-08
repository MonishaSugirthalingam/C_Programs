/* AIM : A C PROGRAM TO CALCULATE THE SUM OF DIGITS OF A GIVEN NUMBER UNTIL THE SUM BECOMES A SIGNLE DIGIT NUMBER
INPUT  OUTPUT
234    9
967    4
2347   7
*/
#include <stdio.h>
void sumfun(int);
void checking(int n)
{
    int m,sum=0,s;
    s=n;
    while(s!=0){
        m=s%10;
        sum=sum+sizeof m;
        s=s/10;
    }
    if(sum>4){
        sumfun(n);
    }
    else{
        printf("%d\n",n);
    }
}
void sumfun(int n){
    int m,sum=0;
    while(n!=0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    checking(sum);
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    sumfun(n);
}