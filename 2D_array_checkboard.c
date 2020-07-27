//CHECKBOARD REPRESENTATION OF 2D ARRAY
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { a[i][j]=0;
    }
  }
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { if(a[i][j]==((i+j)%2))
      { a[i][j]=0;
      }
      else
      { a[i][j]=1;
      }
     
    }
  }
  for(i=0;i<n;++i)
  { printf("\n");
    for(j=0;j<n;++j)
    { printf("%d\t",a[i][j]);
    }
  }
  return 0;
}
