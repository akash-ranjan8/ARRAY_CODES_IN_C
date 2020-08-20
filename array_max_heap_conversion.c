#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void heapify(int a[],int n,int i)
{ int l,left,right,t;
  l=i;
  left=2*i+1;
  right=2*i+2;
  if(left<n && a[left]>a[l])
  { l=left;
  }
  if(right<n && a[right]>a[l])
  { l=right;
  }
  if(l!=i)
  { t=a[i];
    a[i]=a[l];
    a[l]=t;
    heapify(a,n,l);
  }
}
void build_max_heap(int a[],int n)
{ int s=(n/2)-1;
  for(int i=s;i>=0;--i)
  { heapify(a,n,i);
  }
}
int main()
{ int n,i;
  clock_t t;
  t=clock();
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  build_max_heap(a,n);
  printf("Max Heap is as Follows....\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("\nTime Taken: %f\n",time_taken);
  return 0;
}
