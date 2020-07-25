#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  printf("enter the elements of matrix\n");
  int a[n][n];
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { scanf("%d",&a[i][j]);
    }
  }
//LOWER TRIANGLE
  for(i=0;i<n;++i)
  { printf("\n");
    for(j=0;j<n;++j)
    { if(i==j || i>j)
      { printf("%d\t",a[i][j]);
      }
    }
  }
//UPPER TRIANGLE
  for(i=0;i<n;++i)
  { printf("\n");
    for(j=0;j<n;++j)
    { if(i==j || j>i)
      { printf("%d\t",a[i][j]);
      }
    }
  }
//SECONDARY DIAGONAL ELEMENT
  for(i=0;i<n;++i)
  { printf("\n");
    for(j=0;j<n;++j)
    { if((i+j)==(n-1))
      { printf("%d\t",a[i][j]);
      }
    }
   }
   return 0;
}
   
