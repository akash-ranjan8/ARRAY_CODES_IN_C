#include<stdio.h>
#include<time.h>
#define numline 2
#define numstation 4
int min(int a , int b)
{ return a < b ? a : b;
}
int assembly(int a[][numstation],int t[][numstation],int *e,int *x)
{ int T1[numstation],T2[numstation],i;
  T1[0] = e[0] + a[0][0];
  T2[0] = e[1] + a[1][0];
  for (i = 1; i < numstation; ++i) 
    { 
        T1[i] = min(T1[i-1] + a[0][i], T2[i-1] + t[1][i] + a[0][i]); 
        T2[i] = min(T2[i-1] + a[1][i], T1[i-1] + t[0][i] + a[1][i]); 
    } 
   return min(T1[numstation-1] + x[0], T2[numstation-1] + x[1]); 
} 
int main() 
{ 
    int i,j;
    int a[numline][numstation];
    int t[numline][numstation];
    printf("enter the station value\n");
    for(i=0;i<numline;++i)
    { for(j=0;j<numstation;++j)
      { scanf("%d",&a[i][j]);
      }
    }
    printf("\nenter the path value\n");
    for(i=0;i<numline;++i)
    { for(j=0;j<numstation;++j)
      { scanf("%d",&t[i][j]);
      }
    }
    int e[numline];
    int x[numline];
    printf("\nenter the entry line value\n");
    for(i=0;i<numline;++i)
    { scanf("%d",&e[i]);
    }
    printf("\nenter the exit line value\n");
    for(i=0;i<numline;++i)
    { scanf("%d",&x[i]);
    }
  
    printf("\nMinimum path value is: %d\n",assembly(a, t, e, x)); 
  
    return 0; 
} 
