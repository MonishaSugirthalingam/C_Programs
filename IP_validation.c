#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char ip[16];
int bin1[10],count1=0;
int bin2[10],count2=0;
int bin3[10],count3=0;
int bin4[10],count4=0;
int bin[50],count5=0;
int valid_ip[5];
int ands[50];
int count=0;
int NID;
int nid[5]={8,16,24};
int arr[10]={128,64,32,16,8,4,2,1};
void start()
{
    int temp[50],k=0;
    for(k=0;k<NID;k++)
    {
        ands[k]=1;
    }
    while(k!=count5)
    {
        ands[k]=0;
        k++;
    }
    for(int i=0;i<count5;i++)
    {
        if(bin[i]==1 && ands[i]==1)
        {
            temp[i]=1;
        }
        else
        {
            temp[i]=0;
        }
    }
    printf("Starting Address of Given IP %s is ",ip);
    int i=0,sum;
    while(i!=count5)
    {
        sum=0;
        for(int j=0;j<8;j++)
        {
            if(temp[i]==1)
            {
                sum=sum+arr[j];
            }
            i++;
        }
        printf("%d.",sum);
    }
    printf("\n");
    
}
void startingaddr(int class)
{
    if(class==0 && NID>nid[0])
    {
        start();
    }
    else if(class==0 && NID<=nid[0])
    {
        printf("Starting Address is 0.0.0.0\n");
    }
    
    else if(class==1 && NID>nid[1])
    {
        start();
    }
    else if(class==1 && NID<=nid[1])
    {
        printf("Starting Address is 128.0.0.0\n");
    }
    
    else if(class==2 && NID>nid[2])
    {
        start();
    }
    else if(class==2 && NID<=nid[2])
    {
        printf("Starting Address is 192.0.0.0\n");
    }
    else if(class==3)
    {
        printf("Starting Address is 224.0.0.0\n");
    }
    else
    {
        printf("Starting Address is 240.0.0.0\n");
    }
}
void privatepublic()
{
    if(valid_ip[0]==10 && valid_ip[1]>=0 && valid_ip[2]<=255 && valid_ip[2]>=0 && valid_ip[2]<=255 && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Given IP %s is a private IP\n",ip);
    }
    if(valid_ip[0]==172 && valid_ip[1]>=16 && valid_ip[1]<=31  && valid_ip[2]>=0 && valid_ip[2]<=255  && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Given IP %s is a private IP\n",ip);
    }
    if(valid_ip[0]==192 && valid_ip[1]==168  && valid_ip[2]>=0 && valid_ip[2]<=255  && valid_ip[3]>=0 && valid_ip[3]<=255)
    {
        printf("Given IP %s is a private IP\n",ip);
    }
    
}
void LBC()
{
    int temp[50],t,j=0;
    for(int i=count5-1;i>=0;i--)
    {
        temp[j]=bin[i];
        j++;
    }
    int h=32-NID;
    for(int i=0;i<h;i++)
    {
        temp[i]=1;
    }
    for(int i=0;i<count5/2;i++)
    {
        t=temp[i];
        temp[i]=temp[count5-i-1];
        temp[count5-i-1]=t;
        
    }
    printf("Limited Broad Cost(LBC) Address of Given IP %s is : ",ip);
    int i=0,sum;
    while(i!=count5)
    {
        sum=0;
        for(int j=0;j<8;j++)
        {
            if(temp[i]==1)
            {
                sum=sum+arr[j];
            }
            i++;
        }
        printf("%d.",sum);
    }
    printf("\n");
}
void networkid()
{
    int temp[50],t,j=0;
    for(int i=count5-1;i>=0;i--)
    {
        temp[j]=bin[i];
        j++;
    }
    int h=32-NID;
    for(int i=0;i<h;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<count5/2;i++)
    {
        t=temp[i];
        temp[i]=temp[count5-i-1];
        temp[count5-i-1]=t;
        
    }
    printf("Network Address of Given IP %s is : ",ip);
    int i=0,sum;
    while(i!=count5)
    {
        sum=0;
        for(int j=0;j<8;j++)
        {
            if(temp[i]==1)
            {
                sum=sum+arr[j];
            }
            i++;
        }
        printf("%d.",sum);
    }
    printf("\n");
}
void octal1(int x)
{
    int m,t;
    while(x>0)
    {
        m=x%2;
        bin1[count1]=m;
        count1++;
        x=x/2;
    }
    for(int i=0;i<count1/2;i++)
    {
        t=bin1[i];
        bin1[i]=bin1[count1-i-1];
        bin1[count1-i-1]=t;
        
    }
}
void octal2(int x)
{
    int m,t;
    
    for(int i=0;x>0;i++)
    {
        m=x%2;
        bin2[count2]=m;
        count2++;
        x=x/2;
    }
    
    for(int i=0;i<count2/2;i++)
    {
        t=bin2[i];
        bin2[i]=bin2[count2-i-1];
        bin2[count2-i-1]=t;
    }
}
void octal3(int x)
{
    int m,t;
    while(x>0)
    {
        m=x%2;
        bin3[count3]=m;
        count3++;
        x=x/2;
    }
    for(int i=0;i<count3/2;i++)
    {
        t=bin3[i];
        bin3[i]=bin3[count3-i-1];
        bin3[count3-i-1]=t;
        
    }
}
void octal4(int x)
{
    int m,t;
    while(x>0)
    {
        m=x%2;
        bin4[count4]=m;
        count4++;
        x=x/2;
    }
    for(int i=0;i<count4/2;i++)
    {
        t=bin4[i];
        bin4[i]=bin4[count4-i-1];
        bin4[count4-i-1]=t;
        
    }
}
void make8bits()
{
    //for octal 1
    int s,t;
    while(count1!=8)
    {
        count1++;
        s=0;
        for(int i=0;i<count1;i++)
        {
            t=bin1[i];
            bin1[i]=s;
            s=t;
        }
    }
    //for octal2
    while(count2!=8)
    {
        count2++;
        s=0;
        for(int i=0;i<count2;i++)
        {
            t=bin2[i];
            bin2[i]=s;
            s=t;
        }
    }
    //for octal 3
    while(count3!=8)
    {
        count3++;
        s=0;
        for(int i=0;i<count3;i++)
        {
            t=bin3[i];
            bin3[i]=s;
            s=t;
        }
    }
    //for octal4
    while(count4!=8)
    {
        count4++;
        s=0;
        for(int i=0;i<count4;i++)
        {
            t=bin4[i];
            bin4[i]=s;
            s=t;
        }
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
void inttobinary()
{
    octal1(valid_ip[0]);
    octal2(valid_ip[1]);
    octal3(valid_ip[2]);
    octal4(valid_ip[3]);
    octal();
}
//to find subnetting IP  for class A
void subnetting1(int class,int reservedbits)
{
    int sum=0;
    for(int i=0;i<reservedbits;i++)
    {
        sum=sum+arr[i];
    }
    printf("Subnet Mask of Given IP %s is %d.%d.%d.%d\n",ip,255,sum,0,0);
}
//to find subnetting IP  for class B
void subnetting2(int class,int reservedbits)
{
    int sum=0;
    for(int i=0;i<reservedbits;i++)
    {
        sum=sum+arr[i];
    }
    printf("Subnet Mask of Given IP %s is %d.%d.%d.%d\n",ip,255,255,sum,0);
}
//to find subnetting IP  for class C
void subnetting3(int class,int reservedbits)
{
    int sum=0;
    for(int i=0;i<reservedbits;i++)
    {
        sum=sum+arr[i];
    }
    printf("Subnet Mask of Given IP %s is %d.%d.%d.%d\n",ip,255,255,255,sum);
}
//to find the subnet mask
void subnetmask(int class)
{
    if(class==0 && NID>nid[0])
    {
        subnetting1(class,NID-nid[0]);
    }
    else if(class==0 && NID<=nid[0])
    {
        printf("Subnet Mask is 255.0.0.0\n");
    }
    
    else if(class==1 && NID>nid[1])
    {
        subnetting2(class,NID-nid[1]);
    }
    else if(class==1 && NID<=nid[1])
    {
        printf("Subnet Mask is 255.255.0.0\n");
    }
    
    else if(class==2 && NID>nid[2])
    {
        subnetting3(class,NID-nid[2]);
    }
    else if(class==2 && NID<=nid[2])
    {
        printf("Subnet Mask is 255.255.255.0\n");
    }
    else
    {
        printf("There is no Subnet Mask for CLASS-%c\n",class+65);
    }
}
//class finding function
int class()
{
    if(valid_ip[0]>=0 && valid_ip[0]<=127)
    {
        printf("Given IP address is Under CLASS-A\n");
        return 0;
    }
    else if(valid_ip[0]>=128 && valid_ip[0]<=191)
    {
        printf("Given IP address is Under CLASS-B\n");
        return 1;
    }
    else if(valid_ip[0]>=192 && valid_ip[0]<=223)
    {
        printf("Given IP address is Under CLASS-C\n");
        return 2;
    }
    else if(valid_ip[0]>=224 && valid_ip[0]<=239)
    {
        printf("Given IP address is Under CLASS-D\n");
        return 3;
    }
    else
    {
        printf("Given IP address is Under CLASS-E\n");
        return 4;
    }
}
//character to integer conversion
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
        sum=sum+(a[1]-48)+((a[0]-48)*10);
        return sum;
    }
    else
    {
        sum=sum+(a[2]-48);
        sum=sum+((a[0]-48)*100);
        sum=sum+((a[1]-48)*10);
        return sum;
    }
}
//To check the IP Address validation
bool ip_valid()
{
    int point_count=0;
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
            if(ip[i]=='1' || ip[i]=='2' || ip[i]=='3' || ip[i]=='4' || ip[i]=='5' || ip[i]=='6' || ip[i]=='7' || ip[i]=='8' || ip[i]=='9' || ip[i]=='0' || ip[i]=='.')
            {
                
            }
            else
            {
                return false;
            }
            if(ip[i]=='.')
            {
                point_count=point_count+1;
            }
        }
        if(point_count>3)
        {
           return false; 
        }
        int i=0,j=0;
        char temp[10];
        while(j<=strlen(ip))
        {
            if(ip[j]=='.' || ip[j]=='\0')
            {
                j++;
                temp[i]='\0';
                if(strlen(temp)<=3)
                {
                    int n=chartoint(temp);
                    strcpy(temp,"");
                    valid_ip[count]=n;
                    count++;
                    if(n>255)
                    {
                        return false;
                    }
                    i=0;
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
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char temp[20],a[5];
    int k=0;
    printf("Enter the IP Address (0.0.0.0/NID) : ");
    scanf("%s",temp);
    int l=strlen(temp);
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
        networkid();
        LBC();
        printf("Directed Broad Cost Address of Given IP %s is 255.255.255.255\n",ip);
        startingaddr(c);
        privatepublic();
    }
    else
    {
        printf("InValid IP address\n");
    }
}