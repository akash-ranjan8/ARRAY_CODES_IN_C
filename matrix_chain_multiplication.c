#include<stdio.h>
int main()
{ int n,i,j,d,min,q,k;
  printf("enter the no. of different \n");
  scanf("%d",&n);
  int p[n];
  printf("enter the values for p\n");
  for(i=0;i<n;++i)
  { scanf("%d",&p[i]);
  }
  int m[n][n],s[n][n];
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { m[i][j]=0;
      s[i][j]=0;
    }
  }
  for(d=1;d<n-1;++d)
  { for(i=1;i<n-d;++i)
    { j=i+d;
      min=32767;
      for(k=1;k<=j-1;++k)
      { q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
        if(q<min)
        { min=q;
          s[i][j]=k;
        }
      }
      m[i][j]=min;
    }
  }
  printf("minimum no. of multiplication is: %d\n",m[1][n-1]);
  return 0;
}

