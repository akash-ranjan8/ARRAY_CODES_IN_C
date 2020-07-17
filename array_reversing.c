#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("Reversing the Array....\n");
  for(i=n-1;i>=0;--i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
 
