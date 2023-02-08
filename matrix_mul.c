#include <stdio.h>
#define r1 2 // number of rows in Matrix-1
#define c1 2 // number of columns in Matrix-1
#define r2 2 // number of rows in Matrix-2
#define c2 2 
int matmul(int mat1[r2][c1],int mat2[r2][c2])
{
    int sum[r1][c2];
  for(int i=0;i<r1;i++)
  {
      for(int j=0;j<c2;j++)
      {
           sum[i][j]=0;
          for(int k=0;k<r2;k++)
          {
              sum[i][j]+=mat1[i][k]*mat2[k][j];
              
          }
          printf("%d",sum[i][j]);
      }
    printf("\n");    
  }
  

}

int main()
{
    
    int mat1[r1][c1]={
        {1,1},{2,2}
    };
    int mat2[r2][c2]={ { 1,1},{ 2, 2 } };
    matmul(mat1,mat2);
    return 0;
}

