#include<stdio.h>
int main()
{ int i,j,n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int max=0;
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[j]>a[i] && (j-i)>max)
      { max=j-i;
      }
    }
  }
  printf("maximum j-i is = %d\n",max);
  return 0;
}
