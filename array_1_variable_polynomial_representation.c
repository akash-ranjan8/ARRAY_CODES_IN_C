#include<stdio.h>
int main()
{ int n,i;
  printf("enter the highest degree of polynomial\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the coefficients of polynomial\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("%d+",a[0]);
  for(i=1;i<n-1;++i)
  { printf("%dx^%d+",a[i],i);
  }
  printf("%dx^%d",a[n-1],n-1);
  return 0;
}
