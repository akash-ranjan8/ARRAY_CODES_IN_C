#include<stdio.h>
int main()
{ int i,j,n,key,p1,p2;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the key\n");
  scanf("%d",&key);
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(((a[i]*a[i])+(a[j]*a[j]))==key)
      { p1=i;
        p2=j;
      }
    }
  }
  printf("the elements are %d & %d and their positions are %d & %d repectively\n",a[p1],a[p2],p1+1,p2+1);
  return 0;
}
