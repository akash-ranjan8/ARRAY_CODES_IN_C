#include<stdio.h>
void reverse_by_group(int a[],int n,int k)
{ if(n<k)
  { k=n;
  }
  int d=k-1;
  int m=2;
  int i;
  for(i=0;i<n;++i)
  { if(i>=d)
    { d=k*m;
      if(d>=n)
      { d=n;
      }
      i=k*(m-1)-1;
      m++;
    }
    else
    { int t=a[i];
      a[i]=a[d];
      a[d]=t;
    }
    d=d-1;
  }
}
int main()
{ int n,i,k;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the group size\n");
  scanf("%d",&k);
  reverse_by_group(a,n,k);
  printf("output as follows\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
