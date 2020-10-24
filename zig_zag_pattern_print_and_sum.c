//Zig-Zag sequence of a matrix and its sum
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  int a[n][n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  int sum=0;
  for(i=0;i<n;++i)
  { printf("%d ",a[0][i]);
    sum=sum+a[0][i];
  }
  j=n-2;
  i=1;
  while(i<n && j>=0)
  { printf("%d ",a[i][j]);
    sum+=a[i][j];
    i++;
    j--;
  }
  for(i=1;i<n;++i)
  { printf("%d ",a[n-1][i]);
    sum+=a[n-1][i];
  }
  printf("total sum: %d\n",sum);
  return 0;
}
