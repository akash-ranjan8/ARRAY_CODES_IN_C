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
void main()
{ int n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  insertion_sort(n,a);
  printf("sorted array\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
}
