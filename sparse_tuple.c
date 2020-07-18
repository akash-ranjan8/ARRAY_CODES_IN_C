#include<stdio.h>
int main()
{ int i,n,j,z,k;
  z=0; k=0;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n][n];
  printf("enter the array elements\n");
  for(i=0;i<n;++i)
  {for(j=0;j<n;++j) 
    {scanf("%d",&a[i][j]);}
  }
  for(i=0;i<n;++i)
  { 
    for(j=0;j<n;++j)
    {
      if(a[i][j]!=0)
      { ++z;}
     }
  }
int b[z][3];
b[0][0]=n;
b[0][1]=n;
b[0][2]=z;
for(i=0;i<n;++i)
{ for(j=0;j<n;++j)
   
  { if(a[i][j]!=0)
    { for(k=0;k<n;++k)
      {b[k][0]=i;
      b[k][1]=j;
      b[k][2]=a[i][j];
     }
   }
}
}
for(i=0;i<z;++i)
{ printf("\n");
   for(j=0;j<3;++j)
  { printf("%d",b[i][j]);
  }
}
return 0;
}
