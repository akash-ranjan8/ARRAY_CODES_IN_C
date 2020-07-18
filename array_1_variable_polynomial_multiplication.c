#include<stdio.h>
int main()
{ int n1,n2,i,j,m;
  printf("enter the size of polynomial 1 and polynomial 2\n");
  scanf("%d%d",&n1,&n2);
  int a[n1],b[n2];
  printf("enter the 1st polynomial data\n");
  for(i=0;i<n1;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the 2nd polynomial data\n");
  for(i=0;i<n2;++i)
  { scanf("%d",&b[i]);
  }
  printf("Multiplication of 1st with 2nd polynomial\n");
  int k=n1+n2;
  int c[k];
  int z[k];
  for(i=0;i<n1;++i)
  { for(j=0;j<n2;++j)
    { for(m=0;m<k;++m)
      { c[m]=a[i]*b[j];
        z[m]=i+j;
      }
    }
  }
  printf("the output is as follows....\n");
  printf("%d+",c[0]);
  for(i=1;i<k;++i)
  { printf("%dx^%d+",c[i],z[i]);
  }
  return 0;
}
  
  
