//TO FIND THE ELEMENT WHICH IS REPEATING ONCE FROM A ARRAY WHERE OTHER ELEMENTS ARE REPEATING TWICE USING O(n) AND CONSTANT SPACE
#include<stdio.h>
int main()
{ int n,r,i;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  r=a[0];
  for(i=1;i<n;++i)
  { r=r^a[i];
  }
  printf("element with single repetition is = %d\n",r);
  return 0;
}
  
