//Spiral array elements printing
#include<stdio.h>
void spiral_print(int r,int c,int a[r][c])
{ int i,k=0,l=0;
  while(k<r && l<c)
  { for(i=1;i<c;++i)
    { printf("%d ",a[k][i]);
    }
    ++k;
    for(i=k;i<r;++i)
    { printf("%d ",a[i][c-1]);
    }
    c--;
    if(k<r)
    { for(i=c-1;i>=1;--i)
      { printf("%d ",a[r-1][i]);
      }
      r--;
    }
    if(l<c)
    { for(i=r-1;i>=k;--i)
      { printf("%d ",a[i][l]);
      }
      l++;
    }
  }
}
int main()
{ int m,n,i,j;
  printf("enter the row and column of the matrix\n");
  scanf("%d%d",&m,&n);
  int a[m][n];
  printf("enter the elements of the matrix\n");
  for(i=1;i<=m;++i)
  { for(j=1;j<=n;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  spiral_print(m,n,a);
  return 0;
}
