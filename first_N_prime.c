/*AIM  :  A C program to sum the first N prime numbers using functions.
AUTHOR :  MONISHA.S
DATE   :  21-03-2022
*/
#include <stdio.h>
int sumprime(int N)
{
    int count=0,sum=0,a=0,times,prime=0;
    while(count<N){
        for(times=0;times<a;times++){
            if (a/times==0){
                prime=prime+1;
            }
            
        }
        if (prime==2){
            sum=sum+a;
            count=count+1;
        }
        prime=0;
        a=a+1;
    }
    printf("%d",sum);
    return sum;
}
int main()
{
    int N,sum;
    scanf("%d",&N); //read the number of prime numbers which you want 
    sum=sumprime(N);
    printf("%d",sum);
    return 0;
}