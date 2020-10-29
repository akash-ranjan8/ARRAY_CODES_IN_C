#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[i]>a[j])
      { int t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("OUTPUT AS FOLLOWS....\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
