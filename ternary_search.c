//Ternary search
#include<stdio.h>
int ternary_search(int l,int r,int ele,int ar[])
{ if(r>=l)
  { int mid1=l+(r-1)/3;
    int mid2=r-(r-1)/3;
    if(ar[mid1]==ele)
    { return mid1;
    }
    if(ar[mid2]==ele)
    { return mid2;
    }
    if(ele<ar[mid1])
    { return ternary_search(l,mid1-1,ele,ar);
    }
    else if(ele>ar[mid2])
    { return ternary_search(mid2+1,r,ele,ar);
    }
    else
    { return ternary_search(mid1+1,mid2-1,ele,ar);
    }
   }
   return -1;
}
int main()
{ int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int a[n],i,ele;
  printf("enter the elements of array\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  printf("enter the element to be searched\n");
  scanf("%d",&ele);
  int z=ternary_search(0,n-1,ele,a);
  if(z!=-1)
  { printf("element found at position: %d\n",z+1);
  }
  else
  { printf("element is not present\n");
  }
  return 0;
}
