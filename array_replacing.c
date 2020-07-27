//REPLACING A ELEMENT BY ITS PREVIOUS AND NEXT ELEMENT MULTIPLICATION
#include<stdio.h>
int main()
{ int n,i,j,k;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { for(k=j+1;k<n;++k)
      { a[j]=a[i]*a[k];
      }
    }
  }
  printf("the new array is as follows...\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
