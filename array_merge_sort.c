#include<stdio.h>
void merge(int n,int a[n],int lb,int mid,int ub)
{ int i,j,k;
  i=0;
  j=0;
  k=lb;
  int n1=mid-lb+1;
  int n2=ub-mid;
  int L[n1];
  int R[n2];
  for(i=0;i<n1;++i)
  { L[i]=a[lb+i];
  }
  for(j=0;j<n2;++j)
  { R[j]=a[mid+1+j];
  }
  while(i<n1&&j<n2)
  { if(L[i]<=R[j])
    { a[k]=L[i];
      ++i;
    }
    else
    { a[k]=R[j];
      ++j;
    }
   ++k;
  }
  while(i<n1)
  { a[k]=L[i];
    ++k;
    ++i;
  }
  while(j<n2)
  { a[k]=R[j];
    ++k;
    ++j;
  }
}
void merge_sort(int n,int a[n],int lb,int ub)
{ int mid;
  if(lb<=ub)
  { mid=(lb+ub)/2;
    merge_sort(n,a,lb,mid);
    merge_sort(n,a,mid+1,ub);
    merge(n,a,lb,mid,ub);
  }
}
void main()
{ int n,i,l,u;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  l=0;
  u=n;
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  merge_sort(n,a,l,u);
  printf("sorted array\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
}
