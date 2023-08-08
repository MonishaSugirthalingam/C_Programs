//Mutiplication table
#include <stdio.h>
int main()
{
   int table,ans,i;
   printf("Enter the table which you want : ");
   scanf("%d",&table);
   for(i=1;i<=10;i++)
   {
       ans=i*table;
       printf("%d x %d = %d\n",i,table,ans);
   }
   return 0;
}