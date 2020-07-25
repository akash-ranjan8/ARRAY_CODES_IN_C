#include<stdio.h>
int main()
{ int i,j,k,n,sum;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the sum of triplet\n");
  scanf("%d",&sum);
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { for(k=j+1;k<n;++k)
      { if(a[i]+a[j]+a[k]==sum)
        { printf("%d,%d,%d\n",a[i],a[j],a[k]);
        }
      }
    }
  }
  return 0;
}
