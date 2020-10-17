#include<stdio.h>
int main()
{ int n,i,j,k,x;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the sum of triplet\n");
  scanf("%d",&x);
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { for(k=j+1;k<n;++k)
      { if((a[i]+a[j]+a[k])==x)
        { printf("\n%d,%d,%d\n",a[i],a[j],a[k]);
        }
      }
    }
  }
  return 0;
}
  
