#include<stdio.h>
int main()
{ int r,c,i,j;
  printf("enter the row and column of matrix\n");
  scanf("%d%d",&r,&c);
  printf("enter the elements of matrix\n");
  int a[r][c];
  for(i=0;i<r;++i)
  { for(j=0;j<c;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  int count=0;
  for(i=0;i<r;++i)
  { for(j=0;j<c;++j)
    { if(a[i][j]!=0)
      { ++count;
      }
    }
  }
  int m=count+1;
  int tuple[m][3];
  int k=1;
  tuple[0][0]=r;
  tuple[0][1]=c;
  tuple[0][2]=count;
  for(i=0;i<r;++i)
  { for(j=0;j<c;++c)
    { if(a[i][j]!=0)
      { 
          tuple[k][0]=i+1;
          tuple[k][1]=j+1;
          tuple[k][2]=a[i][j];
          k=k+1;
        
      }
       
     }
   }
   for(i=0;i<m;++i)
   { printf("\n");
     for(j=0;j<3;++j)
     { printf("%d\t",tuple[i][j]);
     }
   }
//TRANSPOSING OF TUPLE
   int s=1;
   int t[m][3];
   t[0][0]=tuple[0][1];
   t[0][1]=tuple[0][0];
   t[0][2]=tuple[0][2];
   for(i=1;i<m;++i)
   {  t[s][0]=tuple[i][1];
      t[s][1]=tuple[i][0];
      t[s][2]=tuple[i][2];
      ++s;
   }
   int temp;
//SORTING OF TRANSPOSED TUPLE
   for(i=1;i<m;++i)
   { for(j=i+1;j<m;++j)
     { if(t[i][0]<t[j][0])
       { //swapping row
         temp=t[i][0];
         t[i][0]=t[j][0];
         t[j][0]=temp;
         //swapping column
         temp=t[i][1];
         t[i][1]=t[j][1];
         t[j][1]=temp;
         //swapping the data
         temp=t[i][2];
         t[i][2]=t[j][2];
         t[j][2]=temp;
       }
       if(t[i][0]==t[j][0])
       { if(t[i][1]<t[j][1])
         { //swapping column
           temp=t[i][1];
           t[i][1]=t[j][1];
           t[j][1]=temp;
           //swapping data
           temp=t[i][2];
           t[i][2]=t[j][2];
           t[j][2]=temp;
          }
       }
     }
    }      
    return 0;
}
        
