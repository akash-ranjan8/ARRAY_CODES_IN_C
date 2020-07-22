//SORT ELEMENTS BY THERE FREQUENCY
#include<stdio.h>
int main()
{ int i,n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int f[n];
  int c[n];
  for(i=0;i<n;++i)
  { c[i]=1;
  }
  for(i=0;i<n;++i)
  { int pos=i;
    for(int j=i+1;j<n;++j)
    { int p=j;
      if(a[pos]==a[p])
      { ++c[pos];
        ++c[p];
      }
      f[p]=c[p];
    }
    f[pos]=c[pos];
    
  }
  int t;
  for(i=0;i<n;++i)
  { for(int j=i+1;j<n;++j)
    { if(f[i]<f[j])
      { t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  for(i=0;i<n;++i)
  { printf("%d\t",f[i]);
  }  
  printf("\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
return 0;
}
