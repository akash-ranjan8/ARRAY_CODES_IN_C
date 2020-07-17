#include<stdio.h>
int main()
{ int n1,n2,i,j;
  printf("enter the size of the array1 and array2\n");
  scanf("%d%d",&n1,&n2);
  int a[n1],b[n2];
  int k=n1+n2;
  int c[k];
  printf("enter the elements of array 1\n");
  for(i=0;i<n1;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the elements of array 2\n");
  for(i=0;i<n2;++i)
  { scanf("%d",&b[i]);
  }
  int t;
  printf("Sorting of array 1\n");
  for(i=0;i<n1;++i)
  { for(j=i+1;j<n1;++j)
    { if(a[i]<a[j])
      { t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("Sorting of array 2\n");
  for(i=0;i<n2;++i)
  { for(j=i+1;j<n2;++j)
    { if(b[i]<b[j])
      { t=b[i];
        b[i]=b[j];
        b[j]=t;
      }
    }
  }
  int z=0;
  i=0;
  j=0;
  while(i<n1 && j<n2)
  { if(a[i]<b[j])
    { c[z++]=a[i++];
    }
    else
    { c[z++]=b[j++];
    }
  }
  while(i<n1)
  { c[z++]=a[i++];
  }
  while(j<n2)
  { c[z++]=b[j++];
  }
  printf("the merged and sorted array is as follows....\n");
  for(i=0;i<k;++i)
  { printf("%d\t",c[i]);
  }
  return 0;
}
  
  
  
  
