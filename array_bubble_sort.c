#include<stdio.h>
int main()
{ int n,i,j,t;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;++i)
  { for(j=0;j<n-i-1;++j)
    { if(a[j]>a[j+1])
      { t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
       }
     }
   }
   printf("the sorted array is as follows\n");
   for(i=0;i<n;++i)
   { printf("%d\t",a[i]);
   }
return 0;
}

