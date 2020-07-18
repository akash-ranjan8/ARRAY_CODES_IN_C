//2 VARIABLE POLYNOMIAL MULTIPLICATION
#include<stdio.h>
int main()
{ int n1,n2,i,j,h;
  printf("enter the terms in polynomial 1 and 2\n");
  scanf("%d%d",&n1,&n2);
  int e,f;
  e=n1*3;
  f=n2*3;
  int m;
  int a[e],b[f];
  printf("enter the data for polynomial 1\n");
  for(i=0;i<e;i=i+3)
  { m=i;
    printf("enter the coefficient\n");
    scanf("%d",&a[m]);
    printf("enter the degree of x\n");
    scanf("%d",&a[m+1]);
    printf("enter the degree of y\n");
    scanf("%d",&a[m+2]);
  }
  printf("enter the data for polynomial 2\n");
  for(i=0;i<f;i=i+3)
  { m=i;
    printf("enter the coefficient\n");
    scanf("%d",&b[m]);
    printf("enter the degree of x\n");
    scanf("%d",&b[m+1]);
    printf("enter the degree of y\n");
    scanf("%d",&b[m+2]);
  }
  int k=e+f;
  int c[k];
  int x,y;
  if(e==f)
  { for(i=0;i<e;i=i+3)
    { for(j=0;j<e;j=j+3)
      { m=i;
        x=j;
        y=++k;
        c[y]=a[m]*b[x];
        c[y+1]=a[m+1]+b[x+1];
        c[y+2]=a[m+2]+b[x+2];
       }
     }
   }
   else
   { if(e>f)
     { for(i=0;i<e;i=i+3)
       { for(j=0;j<f;j=j+3)
         {  m=i;
            x=j;
            y=++k;
            c[y]=a[m]*b[x];
            c[y+1]=a[m+1]+b[x+1];
            c[y+2]=a[m+2]+b[x+2];
         }
       }
      }
      else
      { for(j=0;j<f;j=j+3)
        { for(i=0;i<e;i=i+3)
          {  m=i;
             x=j;
             y=++k;
             c[y]=a[m]*b[x];
             c[y+1]=a[m+1]+b[x+1];
             c[y+2]=a[m+2]+b[x+2];
          }
        }
      }
   } 
  printf("the multiplication is as follows....\n");
  for(i=0;i<k;i=i+3)
  { m=i;
    printf("%dx^%dy^%d+",c[m],c[m+1],c[m+2]);
  }
  return 0;
}
  
