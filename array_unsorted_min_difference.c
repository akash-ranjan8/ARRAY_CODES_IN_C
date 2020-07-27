#include<stdio.h>
#define max 100000
int main()
{ int n,i,j,min;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  min=max;
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[j]>a[i])
      { int m=a[j]-a[i];
        if(m<min)
        { min=m;
        }
      }
      else
      { int z=a[i]-a[j];
        if(z<min)
        { min=z;
        }
      }
     }
   }
   printf("the minimum difference is = %d\n",min);
   return 0;
}
      
