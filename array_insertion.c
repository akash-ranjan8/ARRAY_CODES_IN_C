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
  printf("enter the element to be inserted and position\n");
  scanf("%d%d",&ele,&pos);
  for(i=n;i>pos;--i)
  { a[i]=a[i-1];}
    a[pos]=ele;
    n=n+1;
   for(i=0;i<n;++i)
   { printf("%d",a[i]);}
}
