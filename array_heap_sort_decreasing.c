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
void heap_sort_decreasing(int a[],int n)
{ int i,t;
  for(i=(n/2)-1;i>=0;--i)
  { heapify(a,n,i);
  }
  for(i=n-1;i>-0;--i)
  { t=a[0];
    a[0]=a[i];
    a[i]=t;
    heapify(a,i,0);
  }
}
int main()
{ int n,i;
  clock_t t;
  t=clock();
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  heap_sort_decreasing(a,n);
  printf("\nSorted array is as follows....\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("\nTIME TAKEN: %f\n",time_taken);
  return 0;
}

