#include <stdio.h>
#include <string.h>

void isomorphic_str(char a[],char b[])
{
    char unique[10];
    int count=0;
    if(strlen(a)==strlen(b))
    {
        //Finding the unique values in string
        unique[count]=a[0];
        count++;
        int flag=0,check=0;;
        for(int i=1;i<strlen(a);i++)
        {
            for(int j=0;j<count;j++)
            {
                if(a[i]==unique[j])
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                unique[count]=a[i];
                count++;
            }
            flag=0;
        }
        //One to one mapping
        char map[10];
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<strlen(a);j++)
            {
                if(unique[i]==a[j])
                {
                    map[i]=b[j];
                }
            }
        }
        //checking of one to one mapping
        for(int i=0;i<count;i++)
        {
            for(int j=0;j<strlen(a);j++)
            {
                if(unique[i]==a[j])
                {
                    if(map[i]!=b[j])
                    {
                        printf("Given String is Not a isomorphic\n");
                        check=1;
                        break;
                    }
                }
            }
        }
        if(check==0)
        {
        printf("Given String is Isomorphic\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
}
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the String1 and String 2 : ");
    scanf("%s",str1);
    scanf("%s",str2);
    isomorphic_str(str1,str2);
}