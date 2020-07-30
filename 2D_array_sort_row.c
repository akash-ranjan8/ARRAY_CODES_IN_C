#include<stdio.h>
int main()
{ int n1,n2,i,j,k,t;
  printf("enter the size of 2D array\n");
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
    { for(k=j+1;k<n2;++k)
      { if(a[i][j]>a[i][k])
        { t=a[i][j];
          a[i][j]=a[i][k];
          a[i][k]=t;
        }
      }
    }
  }
  printf("the resultant 2D array is as follows...\n");
  for(i=0;i<n1;++i)
  { printf("\n");
    for(j=0;j<n2;++j)
    { printf("%d\t",a[i][j]);
    }
  }
  return 0;
}

