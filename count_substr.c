#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100],substring[50];
    int i=0,start=0,end=-1,No_of_substrings=0, occ=0,count=0,a;
    fgets(string,sizeof string,stdin);
    fgets(substring,sizeof substring,stdin);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
        {
            start=end+1;
            end=i;
            for(i=start;i<end;i++)
            {
                if(substring[occ]==string[i])
                {
                    count++;
                    occ++;
                }
            }
            if(count==strlen(substring)-1){
            No_of_substrings++;
            }
            count=0;
            occ=0;
        }
    }
    for(i=end+1;i<strlen(string);i++)
    {
        if(substring[occ]==string[i])
        {
            count++;
            occ++;
        } 
    }
    if(count==strlen(substring))
    {
        No_of_substrings++;
    }
    
    printf("%d",No_of_substrings);
    return 0;
}