#include<stdio.h>
int main()
{ int i,j,r1,c1,r2,c2;
  printf("enter the row and column of matrix 1\n");
  scanf("%d%d",&r1,&c1);
  printf("enter the row and column of matrix 2\n");
  scanf("%d%d",&r2,&c2);
  int a[r1][c1],b[r2][c2];
  printf("enter the matrix 1 data\n");
  for(i=0;i<r1;++i)
  { for(j=0;j<c1;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  printf("enter the matrix 2 data\n");
  for(i=0;i<r2;++i)
  { for(j=0;j<c2;++j)
    { scanf("%d",&b[i][j]);
    }
  }
  int c[r1][c1];
  if(r1==r2 && c1==c2)
  { printf("subtraction of two matrix is possible\n");
    for(i=0;i<r1;++i)
    { for(j=0;j<c1;++j)
      { if(a[i][j]>b[i][j])
        {
          c[i][j]=a[i][j]-b[i][j];
        }
        else
        { 
          c[i][j]=b[i][j]-a[i][j];
        }
      }
    }
  }
  else
  { printf("Subtraction of matrix cannot take place\n");
  }
  printf("the resultant matrix is as follows...\n");
  for(i=0;i<r1;++i)
  { printf("\n");
    for(j=0;j<c1;++j)
    { printf("%d\t",c[i][j]);
    }
  }
  return 0;
}
   
