#include<stdio.h>
int max(int a,int b)
{ if(a>b)
  { return a;
  }
  else
  { return b;
  }
}
int main()
{ int n,m,i,j;
  printf("enter the no. of objects\n");
  scanf("%d",&n);
  printf("enter the weight of the sac\n");
  scanf("%d",&m);
  int w[n],p[n];
  printf("enter the weight of the objects\n");
  for(i=0;i<n;++i)
  { scanf("%d",&w[i]);
  }
  printf("enter the profit of the objects\n");
  for(i=0;i<n;++i)
  { scanf("%d",&p[i]);
  }
  int k[n][m];
  for(i=0;i<n;++i)
  { for(j=0;j<=m;++j)
    { if(i==0 || j==0)
      { k[i][j]=0;
      }
      else if(w[i]<=j)
      { k[i][j]=max(p[i]+k[i-1][j-w[i]],k[i-1][j]);
      }
      else
      { k[i][j]=k[i-1][j];
      }
    }
   }
   printf("the max profit is: %d\n",k[n][m-1]);
   return 0;
}
  
