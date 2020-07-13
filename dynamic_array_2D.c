#include<stdio.h>
#include<stdlib.h>
int main()
{ int i,j,r,c;
  printf("Enter the rows and column of 2-D array\n");
  scanf("%d%d",&r,&c);
  int **a=(int**)malloc(r*(sizeof(int*)));
  for(i=0;i<r;++i)
  { a[i]=(int*)malloc(c*(sizeof(int)));
  }
  printf("enter the elements of 2-D array\n");
  for(i=0;i<r;++i)
  { for(j=0;j<c;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;++i)
  { printf("\n");
    for(j=0;j<c;++j)
    { printf("%d\t",a[i][j]);
    }
  }
  free(a);
  return 0;
}


