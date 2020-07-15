#include<stdio.h>
int main()
{ int i,j,n,t;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[i]>a[j])
      { t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("the sorted array\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
return 0;
}
