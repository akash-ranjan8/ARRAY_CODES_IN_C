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
int m=z+1;
int b[m][3];
b[0][0]=n;
b[0][1]=n;
b[0][2]=z;
int k=1;
for(i=0;i<n;++i)
{ for(j=0;j<n;++j)
   
  { if(a[i][j]!=0)
    { 
      b[k][0]=i+1;
      b[k][1]=j+1;
      b[k][2]=a[i][j];
      ++k;
     }
   }
}
}
for(i=0;i<m;++i)
{ printf("\n");
   for(j=0;j<3;++j)
  { printf("%d\t",b[i][j]);
  }
}
return 0;
}
