#include<stdio.h>
int main()
{ int n,i,j,k;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("original array is as follows...\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[j]==a[i])
      { for(k=j;k<n;++k)
        { a[k]=a[k+1];
        }
        --n;
      }
      else
      { ++j;
      }
    }
  }
  printf("\nthe new array is as follows...\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
