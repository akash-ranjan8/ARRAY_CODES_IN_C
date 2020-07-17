#include<stdio.h>
int main()
{ int i,n1,n2;
  printf("enter the maximum degree of polynomial 1 and polynomial 2\n");
  scanf("%d%d",&n1,&n2);
  int a[n1],b[n2];
  int k=n1+n2;
  int c[k];
  printf("enter the 1st polynomial data\n");
  for(i=0;i<n1;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the 2nd polynomial data\n");
  for(i=0;i<n2;++i)
  { scanf("%d",&b[i]);
  }
  if(n1==n2)
  { for(i=0;i<n1;++i)
    { c[i]=a[i]+b[i];
    }
  }
  else
  { if(n1>n2)
    { for(i=0;i<n2;++i)
      { c[i]=a[i]+b[i];
      }
      for(i=n2;i<n1;++i)
      { c[i]=a[i];
      }
     }
     else
     { for(i=0;i<n1;++i)
       { c[i]=a[i]+b[i];
       }
       for(i=n1;i<n2;++i)
       { c[i]=b[i];
       }
     }
   }
   printf("The resultant polynomial is as follows...\n");
   printf("%d+",c[0]);
   for(i=1;i<k-1;++i)
   { printf("%dx^%d+",c[i],i);
   }
   printf("%dx^%d",c[k-1],k-1);
   return 0;
}
  
