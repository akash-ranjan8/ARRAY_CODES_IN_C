#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int f=1;
  for(i=0;i<n;++i)
  { f=f*a[i];
  }
  for(i=0;i<n;++i)
  { printf("%d\t",(f/a[i]));
  }
  return 0;
}
