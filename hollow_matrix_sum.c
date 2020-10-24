//printing the hollow matrix and its sum
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
  { for(j=0;j<n;++j)
    { if(i==0 || i==(n-1) || j==0 || j==(n-1))
      { printf("%d ",a[i][j]);
        sum+=a[i][j];
      }
      else
      { printf(" ");
      }
    }
    printf("\n");
  }
  printf("\nsum is : %d\n",sum);
  return 0;
}
