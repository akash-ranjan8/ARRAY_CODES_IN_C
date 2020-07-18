#include<stdio.h>
void main()
{ int i,j,k,a[10][10],b[10][10],c[20][20],m,n;
  printf("enter the row and column size\n");
  scanf("%d%d",&n,&m);
  printf("enter the first matrix\n");
  for(i=0;i<n;++i)
  { for(j=0;j<m;++j)
    { scanf("%d",&a[i][j]);}
  }
 printf("enter the second matrix\n");
 for(i=0;i<n;++i)
 { for(j=0;j<m;++j)
   { scanf("%d",&b[i][j]);}
 }
 for(i=0;i<n;++i)
 { for(j=0;j<m;++j)
   { c[i][j]=0;
     for(k=0;k<n;++k)
     { c[i][j]+=a[i][k]*b[k][j];}
   }
 }
 printf("the resultant matrix is\n");
 for(i=0;i<n;++i)
 { printf("\n");
 for(j=0;j<m;++j)
 { printf("%d\t",c[i][j]);}
 }
}

