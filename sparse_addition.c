#include<stdio.h>
void add(int a[][3],int b[][3])
{ if(a[0][0]!=b[0][0] || a[0][1]!=b[0][1])
  { printf("cannot add the tuples\n");
  }
  int max=a[0][2]+b[0][2];
  int sum[max][3];
  sum[0][0]=a[0][0];
  sum[0][1]=a[0][1];
  int i=1;
  int j=1;
  int k=1;
  int count=0;
  while(i!=a[0][2]+1 || j!=b[0][2]+1)
  { if(a[i][0]==b[j][0])
    { if(a[i][1]==b[j][1])
      { sum[k][0]=a[i][0];
        sum[k][1]=a[i][1];
        sum[k][2]=(a[i][2]+b[j][2]);
        ++i;
        ++j;
        ++k;
        ++count;
       }
       else if(a[i][1]>b[j][1])
       { sum[k][0]=b[j][0];
         sum[k][1]=b[j][1];
         sum[k][2]=b[j][2];
         ++k;
         ++j;
         ++count;
       }
       else
       { sum[k][0]=a[i][0];
         sum[k][1]=a[i][1];
         sum[k][2]=a[i][2];
         ++k;
         ++i;
         ++count;
       }
     }
     else if(a[i][0]>b[j][0])
     { sum[k][0]=b[j][0];
       sum[k][1]=b[j][1];
       sum[k][2]=b[j][2];
       ++k;
       ++i;
       ++count;
     }
     else
     { sum[k][0]=a[i][0];
       sum[k][1]=a[i][1];
       sum[k][2]=a[i][2];
       ++k;
       ++i;
       ++count;
     }
   }
     while(i!=a[0][2]+1)
     { sum[k][0]=a[i][0];
       sum[k][1]=a[i][1];
       sum[k][2]=a[i][2];
       ++k;
       ++i;
       ++count;
     }
     while(j!=b[0][2]+1)
     { sum[k][0]=b[j][0];
       sum[k][1]=b[j][1];
       sum[k][2]=b[j][2];
       ++k;
       ++j;
       ++count;
     }
     sum[0][2]=count;
     for(int x=0;x<=count;++x)
     { printf("\n");
       for(int y=0;y<3;++y)
       { printf("%d\t",sum[x][y]);
       }
      }
}
int main()
{ int a[4][3]={{3,3,3},{0,2,1},{1,0,2},{2,2,3}};
  int b[6][3]={{3,3,5},{0,0,1},{0,1,1},{1,0,2},{2,0,3},{2,1,4}};
  add(a,b);
  return 0;
}
     
         
  
