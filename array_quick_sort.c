#include<stdio.h>
#include<time.h>
int parition(int n,int a[n],int l,int h)
{ int pivot;
  pivot=a[l];
  int i,j,t;
  i=l;
  j=h;
  while(i<j)
  { do
    { ++i;
    }while(a[i]<=pivot);
    do
    { --j;
    }while(a[j]>pivot);
   }
  if(i<j)
  { t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
  t=a[l];
  a[l]=a[j];
  a[j]=t;
  return j;
}
void quick_sort(int n,int a[n],int l,int h)
{ int j;
  if(l<h)
  { j=parition(n,a,l,h);
    quick_sort(n,a,l,j);
    quick_sort(n,a,j+1,h);
  }
}
void main()
{ int n,i,l,h;
  clock_t t;
  t=clock();
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  l=0;
  h=n-1;
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  quick_sort(n,a,l,h);
  printf("sorted array\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  t=clock()-t;
  double time_taken=((double)t)/CLOCKS_PER_SEC;
  printf("\nTime Taken: %f\n",time_taken);
}
