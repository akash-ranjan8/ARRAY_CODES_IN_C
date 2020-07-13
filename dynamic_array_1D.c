#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,*ptr;
  printf("enter the size of array\n");
  scanf("%d",&n);
  ptr=(int*)malloc(n*(sizeof(int)));
  int i;
  for(i=0;i<n;++i)
  { scanf("%d",&ptr[i]);
  }
  for(i=0;i<n;++i)
  { printf("%d,",ptr[i]);
  }
  free(ptr);
  return 0;
}
