#include<stdio.h>
int main()
{ int n1,n2,i;
  printf("enter the size of main array\n");
  scanf("%d",&n1);
  printf("enter the subset array size\n");
  scanf("%d",&n2);
  int a[n1],b[n2];
  int c=0;
  printf("enter the elements of main array\n");
  for(i=0;i<n1;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the elements of subset array\n");
  for(i=0;i<n2;++i)
  { scanf("%d",&b[i]);
  }
  for(i=0;i<n1;++i)
  { for(int j=0;j<n2;++j)
    { if(a[i]==b[j])
      { ++c;
      }
    }
  }
  if(n2==c)
  { printf("subset\n");
  }
  else
  { printf("not a subset\n");
  }
  return 0;
}
   
  
