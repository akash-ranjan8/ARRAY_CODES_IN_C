#include<stdio.h>
int main()
{ int n,i,s,e,j;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the start and end range\n");
  scanf("%d%d",&s,&e);
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;++j)
    { if(a[i]>a[j])
      { int t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  int pos=0;
  for(i=0;i<n;++i)
  { if(a[i]==s)
    { pos=i;
    }
  }
  i=pos;
  while(i<n && s<=e)
  { if(a[i]!=s)
    { printf("%d\t",s);
    }
    else
    { ++i;
    }
    s++;
  }
  return 0;
}

