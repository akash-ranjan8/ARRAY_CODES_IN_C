#include<stdio.h>
int main()
{ int n,i,j,k;
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  int a[n][n];
  int m[n];
  int c[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  for(j=0;j<n;++j)
  { m[j]=a[0][j];
  }
  for(i=0;i<n;++i)
  { c[i]=1;
  }
  for(i=1;i<n;++i)
  { for(j=0;j<n;++j)
    { for(k=0;k<n;++k)
     {
       if(a[i][j]==m[k])
       { c[k]++;
       }
    }
   }
  }
  for(i=0;i<n;++i)
  { if(c[i]==n)
    { printf("%d\t",m[i]);
    }
  }
  return 0;
}
