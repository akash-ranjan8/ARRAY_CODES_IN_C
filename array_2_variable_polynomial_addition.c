//TWO VARIABLE POLYNOMIAL ADDITION
#include<stdio.h>
int main()
{ int n1,n2,i,j,k;
  printf("enter the no. of terms in polynomial 1 and polynomial 2\n");
  scanf("%d%d",&n1,&n2);
  int e,f;
  e=3*n1;
  f=3*n2;
  int a[e],b[f];
  printf("enter the data for polynomial 1\n");
  for(i=0;i<e;i=i+3)
  { k=i;
    printf("enter the coefficient\n");
    scanf("%d",&a[k]);
    printf("enter the degree of x\n");
    scanf("%d",&a[k+1]);
    printf("enter the degree of y\n");
    scanf("%d",&a[k+2]);
  }
  printf("enter the data for polynomial 2\n");
  int z;
  for(i=0;i<f;i=i+3)
  { z=i;
    printf("enter the coefficient\n");
    scanf("%d",&b[z]);
    printf("enter the degree of x\n");
    scanf("%d",&b[z+1]);
    printf("enter the degree of y\n");
    scanf("%d",&b[z+2]);
  }
  printf("addition of polynomial 1 with polynomial 2\n");
  int h=e+f;
  int c[h];
  if(e==f)
  { for(i=0;i<e;i=i+3)
    { z=i;
      if(a[z+1]==b[z+1]&&a[z+2]==b[z+2])
      { c[z]=a[z]+b[z];
      }
      else
      { if(a[z+1]>b[z+1]&&a[z+2]>b[z+2])
        { c[z+1]=a[z+1];
          c[z+2]=a[z+2];
        }
        else
        { c[z+1]=b[z+1];
          c[z+2]=b[z+2];
        }
      }
    }
   }
   else
   { if(e>f)
     { for(i=0;i<f;i=i+3)
       { z=i;
         if(a[z+1]==b[z+1]&&a[z+2]==b[z+2])
         { c[z]=a[z]+b[z];
         }
         else
         { if(a[z+1]>b[z+1]&&a[z+2]>b[z+2])
           { c[z+1]=a[z+1];
             c[z+2]=a[z+2];
           }
           else
           { c[z+1]=b[z+1];
             c[z+2]=b[z+2];
           }
         }
       }
       for(i=f;i<e;i=i+3)
       { z=i;
         c[z]=a[z];
         c[z+1]=a[z+1];
         c[z+2]=a[z+2];
       }
      }
      else
      { for(i=0;i<e;i=i+3)
        { z=i;
          if(a[z+1]==b[z+1]&&a[z+2]==b[z+2])
          { c[z]=a[z]+b[z];
          }
          else
          { if(a[z+1]>b[z+1]&&a[z+2]>b[z+2])
            { c[z+1]=a[z+1];
              c[z+2]=a[z+2];
            }
            else
            { c[z+1]=b[z+1];
              c[z+2]=b[z+2];
            }
          }
         }
         for(i=e;i<f;i=i+3)
         { z=i;
           c[z]=b[z];
           c[z+1]=b[z+1];
           c[z+2]=b[z+2];
         }
       }
     }
    printf("the output is as follows....\n");
    for(i=0;i<h;i=i+3)
    { z=i;
      printf("%dx^%dy^%d+",a[z],a[z+1],a[z+2]);
    }
    return 0;
}
          
        
