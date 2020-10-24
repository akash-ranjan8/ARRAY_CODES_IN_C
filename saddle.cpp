//saddle point is a no. which is maximum in column and minimum in row
#include<iostream>
using namespace std;
int main()
{ int i,j,k,n;
  int m,c=0;
  cout<<"enter the size of matrix\n";
  cin>>n;
  int a[n][n];
  cout<<"enter the array elements\n";
  for(i=0;i<n;++i)
  { for(j=0;j<n;++j)
    { cin>>a[i][j];}
  }
  for(i=0;i<n;++i)
  { m=a[i][0];
    for(j=1;j<n;++j)
    { if(m>a[i][j])
      { m=a[i][j];
        c=j;}
     }
  for(k=0;k<n;++k)
  { if(m<a[k][c])
    m=a[k][c];
   }
}
if(k==n)
{ cout<<"the saddle point is: \n"<<m;}

return 0;
}
