#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int sum=0;
  int j;
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { sum+=(a[i]+a[j]);
    }
  }
  printf("\nSUM: %d\n",sum);
  return 0;
}
