/*Create a structure that can contain data of ‘n’ number of customers in a bank. The data to be stored is Account number, Name, Balance in account.
(1) Write a function to print the Account number and name of each customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal, -1 for exit)
Write a function that prints a message,
(1) “The balance is insufficient for the specified withdrawal”, if on withdrawal, the balance falls below Rs. 100.
(2) “Withdrawal Disabled”, if the balance of the specified account number is already below Rs. 100
Condition: The account number must be of 11 digits. If it is less than or greater than 11 digits, then print a message “Invalid Account Number”
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct accound
{
    long int acno;
    char name[50];
    int balance;
    long int acno1;
    int addsub;
    int codes;
}arr[100],arr1[90];
int main()
{
    int i,len,n,count=0,b,code,count1=0,j;
    long int a,no;
    char temp[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        scanf("%ld",&arr[i].acno);
        a=arr[i].acno;
        while(a!=0)
        {
            count++;
            a=a/10;
        }
        if(count!=11)
        {
            printf("Invalid Account Number\n");
            i=i-1;
            count=0;
            continue;
        }
        count=0;
        
        while(getchar()!='\n');
        fgets(temp,100,stdin);
        len=strlen(temp);
        temp[len-1]='\0';
        strcpy(arr[i].name,temp);
        
        scanf("%d",&arr[i].balance);
    }
    
    int s=0;
    while(s<1)
    {
        scanf("%d",&code);
        if(code==1 || code==0)
        {
        arr[count1].codes=code;
        scanf("%ld",&arr[count1].acno1);
        
        scanf("%d",&arr[count1].addsub);
        
        }
        else
        {
            s++;
        }
        count1++;
    }
    printf("Customers with Balance less than Rs.100\n");
    for(i=0;i<n;i++)
    {
        if(arr[i].balance<100)
        {
            printf("%ld-%s\n",arr[i].acno,arr[i].name);
        }
    }
    for(j=0;j<count1-1;j++)
    {
       if(arr[j].codes==1)
       {
           for(i=0;i<n;i++)
            {
               if(arr[j].acno1==arr[i].acno)
                {
                    arr[i].balance=arr[i].balance+arr[j].addsub;
                    printf("Updated Balance of A/c %ld is RS. %d\n",arr[i].acno,arr[i].balance);
                }
            }
       }
       if(arr[j].codes==0)
       {
           for(i=0;i<n;i++)
            {
                if(arr[i].acno==arr[j].acno1)
                {
                    if(arr[i].balance<100)
                        {
                        printf("Withdrawal Disabled\n") ;
                        break;
                        }
                    else
                    {
                        arr[i].balance=arr[i].balance-arr[j].addsub;
                        if(arr[i].balance<100)
                        {
                            printf("The balance is insuffiicient for the specified withdrawal\n");
                            arr[i].balance=arr[i].balance+arr[j].addsub;
                        }
                    }
                    
                }
            }
       }
    }
    return 0;
}
