#include<stdio.h>
int binary_search(int a[],int lb,int ub,int ele)
{ int mid;
  if(lb<ub)
  { mid=(lb+ub)/2;
    if(a[mid]==ele)
    { return (mid+1);
    }
    else if(a[mid]<ele)
    { return binary_search(a,mid+1,ub,ele);
    }
    else
    { return binary_search(a,lb,mid-1,ele);
    }
   }
  else
  { return -1;
  }
}
int main()
{ int n,i,pos,ele;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the element to be searched\n");
  scanf("%d",&ele);
  int flag=0;
  for(i=0;i<n;++i)
  { if(a[i]==ele)
    { flag=1;
    }
  }
  if(flag==1)
  { pos=binary_search(a,0,n-1,ele);
    printf("\nthe element found at position= %d",pos);
  }
  else
  { printf("element not found\n");
  }
  return 0;
}
    

