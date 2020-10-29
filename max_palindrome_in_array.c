#include<stdio.h>
#include<stdbool.h>
int palindrome(int n)
{ int rev=1;
  int d;
  while(n!=0)
  { d=n%10;
    rev=(rev*10)+d;
    n=n/10;
  }
  if(rev==n)
  { return 1;
  }
  else
  { return -1;
  }
}
int main()
{ int n,i;
  printf("enter the number of of integers\n");
  scanf("%d",&n);
  int a[n],b[n];
  printf("enter the number\n");
  for(i=0;i<n;++i)
  { scanf("%d",&a[i]);
  }
  int c=0;
  for(i=0;i<n;++i)
  { if(palindrome(a[i])==1)
    { b[c]=a[i];
      ++c;
    }
  }
  int max=b[0];
  for(i=0;i<=c;++i)
  { if(max<b[i])
    { max=b[i];
    }
  }
  printf("Maximum Palindrome is: %d\n",max);
  return 0;
}
    
