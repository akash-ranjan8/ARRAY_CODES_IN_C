//TRIDIAGONAL MATRIX
#include<stdio.h>
int main()
{ int i,j,n;
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  int a[n][n];
  printf("enter the elements for tridiagonal matrix\n");
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { if(i==j)
      { printf("enter the diagonal elements\n");
        scanf("%d",&a[i][j]);
      }
      else if( i>j && (i-j)==1)
      { printf("enter the diagonal below line elements\n");
        scanf("%d",&a[i][j]);
      }
      else if( j>i && (j-i)==1)
      { printf("enter the diagonal above line elements\n"); 
        scanf("%d",&a[i][j]);
      }
      else
      { a[i][j]=0;
      }
     }
    }
    printf("the output as follows...\n");
    for(i=0;i<n;++i)
    { printf("\n");
      for(j=0;j<n;++j)
      { printf("%d\t",a[i][j]);
      }
    }
    return 0;
}

