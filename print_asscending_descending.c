#include<stdio.h>
void insertion_sort(int n,int a[n])
{ int i,j,temp;
  for(i=1;i<n;++i)
  { temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    { a[j+1]=a[j];
      --j;
    }
    a[j+1]=temp;
   }
}
int main()
{ int n,i,j;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  insertion_sort(n,a);
  for(i=0;i<n/2;++i)
  { printf("%d\t",a[i]);
  }
  for(j=n-1;j>=n/2;--j)
  { printf("%d\t",a[j]);
  }
  return 0;
}













  
