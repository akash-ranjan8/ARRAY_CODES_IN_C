//TWO VARIABLE POLYNOMIAL REPRESENTATION USING ARRAY
#include<stdio.h>
int main()
{ int n,i,m;
  printf("enter the no. of terms\n");
  scanf("%d",&n);
  int k=n*3;
  int a[k];
  printf("enter the terms data\n");
  for(i=0;i<k;i=i+3)
  { m=i;
    printf("enter the coefficient\n");
    scanf("%d",&a[m]);
    printf("enter the degree of x\n");
    scanf("%d",&a[m+1]);
    printf("enter the degree of y\n");
    scanf("%d",&a[m+2]);
  } 
  printf("the polynomial is as follows....\n");
  for(i=0;i<k;i=i+3)
  { m=i;
    printf("%dx^%dy^%d+",a[m],a[m+1],a[m+2]);
  }
  return 0;
}
