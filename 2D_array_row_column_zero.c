#include<stdio.h>
int main()
{ int i,j,n1,n2;
  printf("enter the size of matrix\n");
  scanf("%d%d",&n1,&n2);
  int a[n1][n2];
  printf("enter the elements\n");
  for(i=0;i<n1;++i)
  { for(j=0;j<n2;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n1;++i)
  { for(j=0;j<n2;++j)
    { if(a[i][j]==0)
      { a[0][j]=0;
        a[i][0]=0;
      }
    }
  }
  printf("printing the resultant array\n");
  for(i=0;i<n1;++i)
  { printf("\n");
    for(j=0;j<n2;++j)
    { printf("%d\t",a[i][j]);
    }
  }
  return 0;
}
