#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  int ele,pos;
  int flag=0;
  printf("enter the element to be searched\n");
  scanf("%d",&ele);
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;++i)
  { if(a[i]==ele)
    { pos=i+1;
      flag=1;
    }
   
  }
  if(flag==1)
  { printf("\nthe element found= %d",pos);
  }
  else
  { printf("element not found\n");
  }
return 0;
}
  
