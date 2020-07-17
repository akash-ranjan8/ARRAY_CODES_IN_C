#include<stdio.h>
int main()
{ int n,i,max;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;++i)
  { if(max<a[i])
    { max=a[i];
    }
  }
  int c=0;
  for(i=0;i<n;++i)
  { if(a[i]==max)
    { ++c;
    }
  }  
  printf("The maximum element in the array is= %d and its repetition is =%d\n",max,c);
  return 0;
}

