#include<stdio.h>
#include<string.h>
#include<time.h>
int max(int a,int b)
{ if(a>b)
  { return a;
  }
  else
  { return b;
  }
}
int LCS(char *a,char *b,int m,int n)
{ if(m==0 || n==0)
  { return 0;
  }
  if(a[m-1]==b[n-1])
  { return 1+LCS(a,b,m-1,n-1);
  }
  else
  { return max(LCS(a,b,m,n-1),LCS(a,b,m-1,n));
  }
}
int main()
{ char a[100],b[100];
  int t1;
  clock_t t;
  t=clock();
  printf("enter the number of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the two strings\n");
    scanf("%s%s",a,b);
    int x=strlen(a);
    int y=strlen(b);
    int z=LCS(a,b,x,y);
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("Length of LCS is: %d\n",z);
    printf("Total time taken: %f\n",time_taken);
  }
  return 0;
}

