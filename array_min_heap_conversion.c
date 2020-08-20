#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void heapify(int a[],int n,int i)
{ int s,left,right,t;
  s=i;
  left=2*i+1;
  right=2*i+2;
  if(left<n && a[left]<a[s])
  { s=left;
  }
  if(right<n && a[right]<a[s])
  { s=right;
  }
  if(s!=i)
  { t=a[i];
    a[i]=a[s];
    a[s]=t;
    heapify(a,n,s);
  }
}
void build_min_heap(int a[],int n)
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
  build_min_heap(a,n);
  printf("Min Heap is as Follows....\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("\nTime Taken: %f\n",time_taken);
  return 0;
}
