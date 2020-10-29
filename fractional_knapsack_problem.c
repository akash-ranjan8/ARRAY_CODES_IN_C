#include<stdio.h>
#include<time.h>
void fill_bag(int n,int c[n],int w[n],int m)
{ int current_w,i,max;
  float total_c=0;
  int used[n];
  for(i=1;i<=n;++i)
  { used[i]=0;//shows that object not yet used
  }
  current_w=m;
  while(current_w>0)
  { max=-1;
    for(i=1;i<=n;++i)
    { if((used[i]==0)&&((max==0) || (((float)c[i]/w[i] > (float)c[max]/w[max]))))
      { max=i;
      }
     }
      used[max]=1;
      current_w-=w[max];
      total_c+=c[max];
     
     if(current_w<0)
     { 
       total_c -= c[max];

       total_c += (1 + (float)current_w/w[max]) *c[max]; 
     }
   }
   printf("Maximum Profit: %.2f\n",total_c);
}

int main()
{ int t1,n;
  clock_t t;
  t=clock();
  printf("enter the no. of testcases\n");
  scanf("%d",&t1);
  while(t1--)
  { printf("enter the no. of objects\n");
    scanf("%d",&n);
    int c[n];
    int w[n];
    int m,i;
    printf("enter the cost of the objects\n");
    for(i=1;i<=n;++i)
    { scanf("%d",&c[i]);
    }
    printf("enter the weight of the objects\n");
    for(i=1;i<=n;++i)
    { scanf("%d",&w[i]);
    }
    printf("enter the weight of the bag\n");
    scanf("%d",&m);
    fill_bag(n,c,w,m);
    t=clock()-t;
    double time_taken=((double)t)/CLOCKS_PER_SEC;
    printf("\nTIme Taken: %f\n",time_taken);
   }
   return 0;
}
    
