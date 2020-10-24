//rotating matrix by 90 degree
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of the matrix\n");
  scanf("%d",&n);
  int a[n][n];
  printf("enter the elements of the matrix\n");
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  int k;
  int ninty[n][n];
  for(i=0;i<n;++i)
  { k=0;
    for(j=n-1;j>=0;--j)
    { ninty[i][k]=a[j][i];
      k++;
    }
  }
  printf("90 degree matrix is as follows\n");
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { printf("%d\t",ninty[i][j]);
    }
    printf("\n");
  }
  return 0;
}
