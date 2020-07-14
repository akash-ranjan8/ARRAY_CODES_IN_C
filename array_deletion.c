#include<stdio.h>
void main()
{ int n,i,ele,pos;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the element to be deleted\n");
  scanf("%d",&ele);
  for(i=0;i<n;++i)
  { if(ele==a[i])
    { pos=i;}
    else
    { break;
    }
  }
 for(i=pos;i<n;++i)
 { a[i]=a[i+1];}
   n=n-1;
  for(i=0;i<n;++i)
  { printf("%d",a[i]);
  }
}

