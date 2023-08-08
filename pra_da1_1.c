#include <stdio.h>
#include <string.h>
void displayoutput(int);
int calculation(int);
struct bank
{
    long int pan_no;
    char name[20];
    char address[20];
    long int income;
    float pay;
    int result;
}b[100];
void displayoutput(int n)
{

  printf("THE DETAILS OF THE PERSON WHO HAVE A TAX OF 15,000 AND ABOVE\n");
  for(int i=0;i<n;i++)
  {
        printf("PAN NO : %ld\n",b[b[i].result].pan_no);
        printf("NAME  :%s\n",b[b[i].result].name);
        printf("ADDRESS : %s\n",b[b[i].result].address);
        printf("INCOME : %ld\n",b[b[i].result].income);
        printf("INCOMETAX  :%f\n",b[b[i].result].pay);
  }  
}
int calculation(int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(b[i].income>=40000)
        {
            b[i].pay=0;
        }
        if(b[i].income>=40001 && b[i].income<=60000 )
        {
            b[i].pay=3000+0.3*(b[i].income-40000);
            if(b[i].pay>15000)
            {
                b[count].result=i;
                count++;
            }
        }
        if(b[i].income>=60001 && b[i].income<=120000 )
        {
            b[i].pay=6000+0.3*(b[i].income-40000);
            if(b[i].pay>15000)
            {
                b[count].result=i;
                 count++;
            }
        }
        if(b[i].income>120000)
        {
            b[i].pay=12000+0.3*(b[i].income-40000);
            if(b[i].pay>15000)
            {
                b[count].result=i;
                 count++;
            }
        }
    }
    return count;
}
int main()
{
    int i,n,re;
    char temp[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&b[i].pan_no);
        while(getchar()!='\n');
        fgets(temp,20,stdin);
        temp[strlen(temp)-1]='\0';
        strcpy(b[i].name,temp);
        fgets(temp,20,stdin);
        temp[strlen(temp)-1]='\0';
        strcpy(b[i].address,temp);
        scanf("%ld",&b[i].income);
    }
    re=calculation(n);
    if(re!=0)
    {
    displayoutput(re);
    }
    return 0;
}