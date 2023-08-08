/*AIM  :A C PROGRAM TO COPY THE ONE ARRAY ELEMENTS TO ANOTHER ARRAY
AUTHOR :MONISHA.S 
DATE   :28.02.2022
*/
#include <stdio.h>
int main()
{
   int array[50],newarray[50],numberofelements,elements;
   printf("How many elements did you want to copy? ");
   scanf("%d",&numberofelements);
   printf("Enter a elements one by one\n");
   for(elements=0;elements<numberofelements;elements++)
   {
       scanf("%d",&array[elements]);
   }
   for(elements=0;elements<numberofelements;elements++)
   {
       newarray[elements]=array[elements];
   }
   printf("After copying..We get a Newarray\n");
    for(elements=0;elements<numberofelements;elements++)
   {
       printf("%d\t",newarray[elements]);
   }

}
