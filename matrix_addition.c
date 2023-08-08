/*AIM  :A C PROGRAM TO ADDITION OF ARRAY
AUTHOR :MONISHA.S 
DATE   :28.02.2022
*/
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y,mat1[5][5],mat2[5][5],solmat[5][5],siz10,siz11,siz20,siz21;
  printf("Enter size(Size should be lessthan or equal to 5) of the matrix A ");
  scanf("%d %d",&siz10,&siz11);
  printf("Enter size(Size should be lessthan or equal to 5) of the matrix B ");
  scanf("%d %d",&siz20,&siz21);
  if(siz10==siz20 && siz11==siz21)
  {
    printf("Enter a values of Matrix A one by one \n");
    for(a=0;a<siz10;a++)
        for(b=0;b<siz11;b++){
            scanf("%d",&mat1[a][b]);
        }
    printf("Enter a values of Matrix B one by one \n");
    for(c=0;c<siz20;c++)
        for(d=0;d<siz21;d++){
            scanf("%d",&mat2[c][d]);
        }
    for(x=0;x<siz20;x++)
        for(y=0;y<siz21;y++){
            solmat[x][y]=mat1[x][y]+mat2[x][y];
        }
    printf("After adding the Matrix A and Matrix B...We got a solution Matrix is \n");
    for(x=0;x<siz20;x++){
        for(y=0;y<siz21;y++){
            printf("%d\t",solmat[x][y]);
        }
        printf("\n");
    }
  }
  else
  {
      printf("The given size is not satisfide the contition of matrix addition");
  }
}
