#include<stdio.h>
int main()
{ int n,i,j,r,s;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n],R[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;++i)
  { r=1;
    s=1;
    for(j=0;j<n;++j)
    { if(j!=i && a[j]<a[i])
      { r+=1;
      }
      if(j!=i && a[i]==a[j])
      { s+=1;
      }
    }
    R[i]=r+((s-1)/2);
  }
  printf("output as follows....\n");
  for(i=0;i<n;++i)
  { printf("%d\t",R[i]);
  }
  return 0;
}
