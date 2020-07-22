//SPARSE MATRIX MULTIPLICATION
#include<stdio.h>
int main()
{ int r1,c1,r2,c2;
  printf("enter the sparse matrix 1 row and column\n");
  scanf("%d%d",&r1,&c1);
  printf("enter the sparse matrix 2 row and column\n");
  scanf("%d%d",&r2,&c2);
  int a[r1][c1];
  int b[r2][c2];
  int i,j;
  printf("enter the data for sparse matrix 1\n");
  for(i=0;i<r1;++i)
  { for(j=0;j<c1;++j)
    { scanf("%d",&a[i][j]);
    }
  }
  printf("enter the data for matrix 2\n");
  for(i=0;i<r2;++i)
  { for(j=0;j<c2;++j)
    { scanf("%d",&b[i][j]);
    }
  }
//CHANGING TO THREE TUPLE FOR SPARSE MATRIX 1
  int count=0;
  for(i=0;i<r1;++i)
  { for(j=0;j<c1;++j)
    { if(a[i][j]!=0)
      { ++count;
      }
    }
  }
  int m=count+1;
  int tuple[m][3];
  int k=1;
  tuple[0][0]=r1;
  tuple[0][1]=c1;
  tuple[0][2]=count;
  for(i=0;i<r1;++i)
  { for(j=0;j<c1;++j)
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
//CHANGING TO 3 TUPLE FOR SPARSE MATRIX 2
   int c=0;
   for(i=0;i<r2;++i)
   { for(j=0;j<c2;++j)
     { if(b[i][j]!=0)
       {
          ++c;
       }
     }
   }
   int z=c+1;
   int n=1;
   int tuple1[z][3];
   tuple1[0][0]=r2;
   tuple1[0][1]=c2;
   tuple1[0][2]=c;
   for(i=0;i<r2;++i)
   { for(j=0;j<c2;++j)
     { if(b[i][j]!=0)
       { tuple1[n][0]=i+1;
         tuple1[n][1]=j+1;
         tuple1[n][2]=b[i][j];
         ++n;
       }
     }
   }
//TRANSPOSING TUPLE OF SPARSE MATRIX 2
   int s=1;
   int t[z][3];
   t[0][0]=tuple1[0][1];
   t[0][1]=tuple1[0][0];
   t[0][2]=tuple1[0][2];
   for(i=1;i<z;++i)
   {  t[s][0]=tuple1[i][1];
      t[s][1]=tuple1[i][0];
      t[s][2]=tuple1[i][2];
      ++s;
   }
   int temp;
//SORTING OF TRANSPOSED TUPLE OF SPARSE MATRIX 2
   for(i=1;i<z;++i)
   { for(j=i+1;j<z;++j)
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
//MULTIPLYING TUPLE OF a WITH TRANSPOSE OF TUPLE OF b
    int result[m][3];
    int apos,bpos;
    int x=0;
   if(tuple[0][1]==t[0][0])
   {
    for(apos=0;apos<m;)
    { int r=tuple[apos][0];
      for(bpos=0;bpos<z;)
      { int c=t[bpos][0];
        int tempa=apos;
        int tempb=bpos;
        int sum=0;
        while(tempa<m && tuple[tempa][0]==r &&
              tempb<z && t[tempb][0]==c)
        {  if(tuple[tempa][1]<t[tempb][1])
           {  ++tempa;
           }
           else if(tuple[tempa][1]>t[tempb][1])
           {  ++tempb;
           }
           else
           {  sum+=tuple[tempa++][2]*t[tempb++][2];
           }
        }
        //insering sum in result 
        if(sum!=0)
        { result[x][0]=r;
          result[x][1]=c;
          result[x][2]=sum;
        }
        while(bpos<z && t[bpos][0]==c)
        { ++bpos;
        }
        while(apos<m && tuple[apos][0]==r)
        { ++apos;
        }
     }
   }
  }
  else
  { printf("matrix cannot be multiplied\n");
  }
  for(i=0;i<m;++i)
  { printf("\n");
    for(j=0;j<3;++j)
    { printf("%d\t",result[i][j]);
    }
  }
  return 0;
}
   
           
   
