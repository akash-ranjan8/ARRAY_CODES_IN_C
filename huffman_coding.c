#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>
#define MAX_TREE_HT 100 
struct min_heap_node
{
    char data; 
    unsigned freq;
    struct min_heap_node *left, *right; 
}; 
struct min_heap
{
    unsigned size; 
    unsigned capacity; 
    struct min_heap_node** array; 
}; 
struct min_heap_node* newNode(char data, unsigned freq) 
{ 
    struct min_heap_node* temp 
        = (struct min_heap_node*)malloc
(sizeof(struct min_heap_node)); 
  
    temp->left = temp->right = NULL; 
    temp->data = data; 
    temp->freq = freq; 
  
    return temp; 
} 
struct min_heap* createMinHeap(unsigned capacity)  
{ 
    struct min_heap* minHeap 
        = (struct min_heap*)malloc(sizeof(struct min_heap)); 
    minHeap->size = 0; 
  
    minHeap->capacity = capacity; 
  
    minHeap->array 
        = (struct min_heap_node**)malloc(minHeap-> 
capacity * sizeof(struct min_heap_node*)); 
    return minHeap; 
} 
void swapMinHeapNode(struct min_heap_node** a, 
                     struct min_heap_node** b) 
  
{ 
    struct min_heap_node* t = *a; 
    *a = *b; 
    *b = t; 
} 
void minHeapify(struct min_heap* minHeap, int idx) 
{ 
    int smallest = idx; 
    int left = 2 * idx + 1; 
    int right = 2 * idx + 2; 
    if (left < minHeap->size && minHeap->array[left]-> 
freq < minHeap->array[smallest]->freq) 
        smallest = left; 
  
    if (right < minHeap->size && minHeap->array[right]-> 
freq < minHeap->array[smallest]->freq) 
        smallest = right; 
  
    if (smallest != idx) { 
        swapMinHeapNode(&minHeap->array[smallest], 
                        &minHeap->array[idx]); 
        minHeapify(minHeap, smallest); 
    } 
} 
int isSizeOne(struct min_heap* minHeap) 
{ 
  
    return (minHeap->size == 1); 
} 
struct min_heap_node* extractMin(struct min_heap* minHeap)  
{ 
    struct min_heap_node* temp = minHeap->array[0]; 
    minHeap->array[0] 
        = minHeap->array[minHeap->size - 1]; 
  
    --minHeap->size; 
    minHeapify(minHeap, 0); 
  
    return temp; 
} 
void insertMinHeap(struct min_heap* minHeap, 
                   struct min_heap_node* minHeapNode)  
{ 
    ++minHeap->size; 
    int i = minHeap->size - 1; 
  
    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) { 
  
        minHeap->array[i] = minHeap->array[(i - 1) / 2]; 
        i = (i - 1) / 2; 
    } 
  
    minHeap->array[i] = minHeapNode; 
} 
void buildMinHeap(struct min_heap* minHeap)   
{ 
    int n = minHeap->size - 1; 
    int i; 
  
    for (i = (n - 1) / 2; i >= 0; --i) 
        minHeapify(minHeap, i); 
}  
void printArr(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; ++i) 
        printf("%d", arr[i]); 
  
    printf("\n"); 
} 
int isLeaf(struct min_heap_node* root)   
{ 
  
    return !(root->left) && !(root->right); 
} 
struct min_heap* createAndBuildMinHeap(char data[], int freq[], int size)   
{ 
    struct min_heap* minHeap = createMinHeap(size); 
  
    for (int i = 0; i < size; ++i) 
        minHeap->array[i] = newNode(data[i], freq[i]); 
  
    minHeap->size = size; 
    buildMinHeap(minHeap); 
  
    return minHeap; 
} 
struct min_heap_node* buildHuffmanTree(char data[], int freq[], int size) 
  
{ 
    struct min_heap_node *left, *right, *top; 
    struct min_heap* minHeap = createAndBuildMinHeap(data, freq, size); 
    while (!isSizeOne(minHeap)) { 
        left = extractMin(minHeap); 
        right = extractMin(minHeap); 
        top = newNode('$', left->freq + right->freq); 
        top->left = left; 
        top->right = right;   
        insertMinHeap(minHeap, top); 
    } 
    return extractMin(minHeap); 
} 
void printCodes(struct min_heap_node* root, int arr[], int top)  
{ 
    if (root->left) { 
  
        arr[top] = 0; 
        printCodes(root->left, arr, top + 1); 
    } 
    if (root->right) { 
  
        arr[top] = 1; 
        printCodes(root->right, arr, top + 1); 
    } 
    if (isLeaf(root)) { 
  
        printf("%c: ", root->data); 
        printArr(arr, top); 
    } 
} 
void HuffmanCodes(char data[], int freq[], int size) 
  
{ 
    struct min_heap_node* root 
        = buildHuffmanTree(data, freq, size); 
    int arr[MAX_TREE_HT], top = 0; 
  
    printCodes(root, arr, top); 
} 
int main() 
{ 
    int t1,n,i;
    clock_t t;
    t=clock();
    printf("enter the no. of testcases\n");
    scanf("%d",&t1);
    while(t1--)
    { printf("enter the no. of characters\n");
      scanf("%d",&n);
      int freq[n];
      printf("enter the characters\n");
      char arr[n];
      scanf("%s",arr);
      printf("enter the frequency\n");
      for(i=0;i<n;++i)
      { scanf("%d",&freq[i]);
      }
      HuffmanCodes(arr, freq,n); 
      t=clock()-t;
      double time_taken=((double)t)/CLOCKS_PER_SEC;
      printf("time taken: %f\n",time_taken);
    }
    return 0; 
} 

