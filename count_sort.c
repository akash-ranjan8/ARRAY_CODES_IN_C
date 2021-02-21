//Count sort
#include<stdio.h>
int max(int a[],int n)
{ int m=a[0];
  for(int i=0;i<n;++i)
  { if(m<a[i])
    { m=a[i];
    }
  }
  return m;
}
int count_sort(int a[],int n)
{ int k=max(a,n);
  int count[k+1];
  int i;
  //assigning count array with all zero
  for(i=0;i<k;++i)
  { count[i]=0;
  }
  //count distinct elements
  for(i=0;i<n;++i)
  { ++count[a[i]];
  }
  //updating the count array
  for(i=1;i<=k;++i)
  { count[i]+=count[i-1];
  }
  //initializing the sorted array to a new temporary array
  int b[n];
  for(i=n-1;i>=0;--i)
  { b[--count[a[i]]]=a[i];
  }
  for(i=0;i<n;++i)
  { a[i]=b[i];
  }
  printf("\nSorted array is:\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
}
int main()
{ int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(int i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  count_sort(a,n);
  return 0;
}
  
  
  
