//i am taking pivot position from user instead of using rand function
#include<stdio.h>
#include<math.h>
#include<time.h>
void quicksort(int *ar,int start,int end,int p);      
int  divide(int *ar,int start,int end,int pivot);

void main(){
        int size;
        int p;
        int itr;
        int t;
        printf("enter the no. of testcases\n");
        scanf("%d",&t);
        while(t--)
       { clock_t t;
         t=clock();
        printf("Enter size of array\n");
        scanf("%d",&size);
         printf("Enter pivot\n");
        scanf("%d",&p);
        int a[size];
        for(itr=0;itr<size;itr++){
        printf("enter %d element\n",itr+1);
    scanf("%d",&a[itr]);
        }
        quicksort(a,0,size-1,p);
    for(itr=0;itr<size;itr++)
       { printf(" %d \t",a[itr]);
       }
       t=clock()-t;
       double time_taken=((double)t)/CLOCKS_PER_SEC;
       printf("\nTIME TAKEN: %f\n",time_taken);
        
      }

}

void quicksort(int *ar,int start,int end,int p){
        if(start < end) {
        int pivot = p;
            
            pivot = divide(ar,start,end,pivot);
            quicksort(ar,start,pivot-1,start);
            quicksort (ar,pivot+1,end,pivot+1);
    }
}      
int  divide(int *ar,int start,int end,int pivot){
        int itr,temp,next,next1;
        temp =ar[pivot];
        ar[pivot]=ar[start];
        ar[start]=temp;
        pivot =start;
        next =start+1;
        while(next<=end){
                if(ar[next]>ar[pivot]){
                        temp = ar[next];
            next1 = next;
                        while(next1!=pivot+1){
                               ar[next1]=ar[next1-1];
                                next1--;
                        }
                        ar[next1]=ar[pivot];
                        ar[pivot]=temp;
                        pivot++;
                }
            next++;
    }
return pivot;  
}

