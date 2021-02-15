#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the values of the array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int k,j;
  for(i=1;i<n;++i)
  { k=a[i];
    if(k>0)
    { continue;
    }
    j=i-1;
    while(j>=0 && a[j]>0)
    { a[j+1]=a[j];
      j=j-1;
    }
    a[j+1]=k;
   }
   printf("the resultant array is:\n");
   for(i=0;i<n;++i)
   { printf("%d\t",a[i]);
   }
   return 0;
}
