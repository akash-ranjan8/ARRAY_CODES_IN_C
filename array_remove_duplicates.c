#include<stdio.h>
int main()
{ int n,i;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int t[n];
  int j,k;
  for(i=0;i<n;++i)
  { for(j=i+1;j<n;)
    { if(a[j]==a[i])
      { for(k=j;k<n;++k)
        { a[k]=a[k+1];
        }
        n--;
      }
      else
      { j++;
      }
    }
  }
  printf("\nResultant array is:\n");
  for(i=0;i<n;++i)
  { printf("%d\t",a[i]);
  }
  return 0;
}
  
