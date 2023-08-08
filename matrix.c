/*AIM  :A C PROGRAM TO MALTIPLICATION OF ARRAY
AUTHOR :MONISHA.S 
DATE   :28.02.2022
*/
#include <stdio.h>
int main()
{
  int a,b,c,mat1[5][5],mat2[5][5],solmat[5][5],siz10,siz11,siz20,siz21,sum;
  printf("Enter size(Size should be lessthan or equal to 5) of the matrix A ");
  scanf("%d %d",&siz10,&siz11);
  printf("Enter size(Size should be lessthan or equal to 5) of the matrix B ");
  scanf("%d %d",&siz20,&siz21);
  if(siz11==siz20)
  {
    printf("Enter a values of Matrix A one by one \n");
    for(a=0;a<siz10;a++)
        for(b=0;b<siz11;b++){
            scanf("%d",&mat1[a][b]);
        }
    printf("Enter a values of Matrix B one by one \n");
    for(a=0;a<siz20;a++)
        for(b=0;b<siz21;b++){
            scanf("%d",&mat2[a][b]);
        }
    for(a=0;a<siz10;a++)
        for(b=0;b<siz21;b++){
           for(c=0;c<siz11;c++){
               sum=sum+mat1[a][c]*mat2[c][b];
           }
           solmat[a][b]=sum;
           sum=0;
        }
    printf("After adding the Matrix A and Matrix B...We got a solution Matrix is \n");
    for(a=0;a<siz10;a++){
        for(b=0;b<siz21;b++){
            printf("%d\t",solmat[a][b]);
        }
        printf("\n");
    }
  }
  else
  {
      printf("The given size is not satisfide the contition of matrix Multplication");
  }
}
