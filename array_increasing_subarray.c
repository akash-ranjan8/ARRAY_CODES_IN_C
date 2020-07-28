//COUNTING SUBARRAY WHICH ARE STRICTLY INCREASING
#include<stdio.h>
int main()
{ int n,i,j;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the size of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int c=0;
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[j]>a[j-1])
      { ++c;
      }
    }
  }
  printf("no. of subarrays are = %d",c);
  return 0;
}
