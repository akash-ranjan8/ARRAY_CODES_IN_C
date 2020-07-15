#include<stdio.h>
void selection_sort(int n,int a[n])
{ int i,j,temp,min;
  for(i=0;i<n-1;++i)
  { min=i;
    for(j=i+1;j<n;++j)
    { if(a[j]<a[min])
      { min=j;
      }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
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
  selection_sort(n,a);
  printf("sorted array\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
}
