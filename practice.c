#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char ip[50];
int valid_ip[50];int count=0;
int arr[]={128,64,32,16,8,4,2,1};
int nid[]={8,16,24};
int NID;
int chartoint(char a[]);
int class();
void privatepublic();
bool ip_valid();
void subnetmask(int);
void inttobinary();
void octal1(int);
void octal2(int);
void octal3(int);
void octal4(int);
void success();
int bin1[30],count1=0;
int bin2[30],count2=0;
int bin3[30],count3=0;
int bin4[30],count4=0;
int bin[30],count5=0;

void privatepublic()
{
    if(valid_ip[0]==10 && valid_ip[1]>=0 && valid_ip[1]<=255 && valid_ip[2]>=0 && valid_ip[2]<=255 && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Private\n");
    }
    else if(valid_ip[0]==172 && valid_ip[1]>=16 && valid_ip[1]<=31 && valid_ip[2]>=0 && valid_ip[2]<=255 && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Private\n");
    }
    else if(valid_ip[0]==192 && valid_ip[1]==168 && valid_ip[2]>=0 && valid_ip[2]<=255 && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Private\n");
    }
    else
    {
        printf("Public\n");
    }
}
void subnetting1(int class,int reserved)
{
    int sum=0;
    for(int i=0;i<reserved;i++)
    {
        sum=sum+arr[i];
    }
    printf("255.%d.0.0\n",sum);
}
void subnetting2(int class,int reserved)
{
    int sum=0;
    for(int i=0;i<reserved;i++)
    {
        sum=sum+arr[i];
    }
    printf("255.255.%d.0\n",sum);
}
void subnetting3(int class,int reserved)
{
    int sum=0;
    for(int i=0;i<reserved;i++)
    {
        sum=sum+arr[i];
    }
    printf("255.255.255.%d\n",sum);
}

void subnetmask(int class)
{
    if(class==0 && NID<=nid[0])
    {
        printf("255.0.0.0\n");
    }
    else if(class==0 && NID>nid[0])
    {
        subnetting1(class,NID-nid[0]);
    }
    else if(class==1 && NID<=nid[1])
    {
        printf("255.255.0.0\n");
    }
    else if(class==1 && NID>nid[1])
    {
        subnetting2(class,NID-nid[1]);
    }
    else if(class==2 && NID<=nid[2])
    {
         printf("255.255.255.0\n");
    }
    else if(class==2 && NID>nid[2])
    {
        subnetting3(class,NID-nid[2]);
    }
    else
    {
        printf("There is no Subnet Mask for CLASS %c\n",class+65);
    }

}
int class()
{
    if(valid_ip[0]>=0 && valid_ip[0]<=127)
    {
        printf("class A\n");
        return 0;
    }
    else if(valid_ip[0]>=128 && valid_ip[0]<=191)
    {
        printf("class B\n");
        return 1;
    }
    else if(valid_ip[0]>=192 && valid_ip[0]<=223)
    {
        printf("class C\n");
        return 2;
    }
    else if(valid_ip[0]>=224 && valid_ip[0]<=239)
    {
        printf("class D\n");
        return 3;
    }
    else
    {
         printf("class E\n");
        return 4;
    }
}
bool ip_valid()
{
    int point=0;

    if(NID>32)
    {
        return false;
    }
    if(strlen(ip)<=15)
    {
        for(int i=0;i<strlen(ip);i++)
        {
            if(ip[i]=='-')
            {
                return false;
            }
            if(ip[i]=='0' || ip[i]=='1' || ip[i]=='2' || ip[i]=='3' || ip[i]=='4' || ip[i]=='5' || ip[i]=='6' || ip[i]=='7' || ip[i]=='8' || ip[i]=='9' || ip[i]=='.')
            {

            }
            else
            {
                return false;
            }

            if(ip[i]=='.')
            {
                point=point+1;
            }
        }
        if(point>3)
        {
            return false;

        }
        int i=0,j=0;
        char temp[50];

        while(j<=strlen(ip))
        {
            if(ip[j]=='.' || ip[j]=='\0')
            {
                j++;
                temp[i]='\0';
                if(strlen(temp)<=3)
                {
                    int n=chartoint(temp);
                    valid_ip[count]=n;
                    count++;
                    strcpy(temp,"");
                    i=0;
                    if(n>255)
                    {
                        return false;
                    }
                }
                else
                {
                    return false;

                }
                strcpy(temp,"");
            }
            temp[i]=ip[j];
            i++;
            j++;

        }
    }
    else
    {
        return false;
    }
    return true;
}

int chartoint(char a[])
{
    int sum=0;
    if(strlen(a)==1)
    {
        sum=sum+(a[0]-48);
        return sum;
    }
    else if(strlen(a)==2)
    {
        sum=sum+((a[0]-48)*10)+(a[1]-48);
        return sum;
    }
    else
    {
        sum=sum+(a[2]-48);
        sum=sum+((a[1]-48)*10);
        sum=sum+((a[0]-48)*100);
        return sum;
    }

}

int main()
{
    char temp[50],a[10];
    printf("Enter the IP Address : ");
    scanf("%s",temp);
    int k=0;
    for(int i=0;temp[i]!='\0';i++)
    {
        if(temp[i]=='/')
        {
            i++;
            while(temp[i]!='\0')
            {
                a[k]=temp[i];
                k++;
                i++;
            }
        }
    }
    a[k]='\0';
    NID=chartoint(a);
    int j=0;
    while(temp[j]!='/')
    {
        ip[j]=temp[j];
        j++;
    }
    ip[j]='\0';

    if(ip_valid()==true)
    {
        printf("Valid IP Address\n");
        int c=class();
        subnetmask(c);
        inttobinary();
        privatepublic();
        sucess();
    }
    else
    {
        printf("Invalid IP Address\n");
    }
}

void inttobinary()
{
    octal1(valid_ip[0]);
    octal2(valid_ip[1]);
    octal3(valid_ip[2]);
    octal4(valid_ip[3]);
    octal();
}

void octal1(int x)
{
    while(x>0)
    {
        int m=x%2;
        bin1[count1]=m;
        count1++;
        x=x/2;
    }
}
void octal2(int x)
{
    while(x>0)
    {
        int m=x%2;
        bin2[count2]=m;
        count2++;
        x=x/2;
    }
}
void octal3(int x)
{
    while(x>0)
    {
        int m=x%2;
        bin3[count3]=m;
        count3++;
        x=x/2;
    }
}
void octal4(int x)
{
    while(x>0)
    {
        int m=x%2;
        bin4[count4]=m;
        count4++;
        x=x/2;
    }
}
void octal()
{
    make8bits();

    for(int i=0;i<8;i++)
    {
        bin[count5]=bin1[i];
        count5++;
    }

     for(int i=0;i<8;i++)
    {
        bin[count5]=bin2[i];
        count5++;
    }

     for(int i=0;i<8;i++)
    {
        bin[count5]=bin3[i];
        count5++;
    }

     for(int i=0;i<8;i++)
    {
        bin[count5]=bin4[i];
        count5++;
    }
}

void make8bits()
{
    while(count1!=8)
    {
        count1++;
        int s=0,t;
        for(int i=0;i<count1;i++)
        {
            t=bin1[i];
            bin1[i]=s;
            s=t;
        }
    }

    while(count2!=8)
    {
        count2++;
        int s=0,t;
        for(int i=0;i<count2;i++)
        {
            t=bin2[i];
            bin2[i]=s;
            s=t;
        }
    }
    while(count3!=8)
    {
        count3++;
        int s=0,t;
        for(int i=0;i<count3;i++)
        {
            t=bin3[i];
            bin3[i]=s;
            s=t;
        }
    }
    while(count4!=8)
    {
        count4++;
        int s=0,t;
        for(int i=0;i<count4;i++)
        {
            t=bin4[i];
            bin4[i]=s;
            s=t;
        }
    }
}

void success()
{
    int i=0,sum=0;
    while(i!=count5)
    {
        for(int i=0;i<8;i++)
        {
            if(bin[i]==1)
            {
                sum=sum+arr[i];
            }
            i++;
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
}
