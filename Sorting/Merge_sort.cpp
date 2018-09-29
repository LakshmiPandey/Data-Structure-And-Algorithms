// Merge sort implementation in C++

#include <iostream>
#include<cstdio>
using namespace std;
 

void merge(int a[], int beg, int mid, int last){
    int b[last-beg];
    
    int i=beg, j=mid+1, k=0;
    while(i<mid && j<last){
    if(a[i]<a[j])    
       b[k++]= a[i];
    else
       b[k++]= a[j];
       i++;
       j++;
       
    }
    
    
   
      while(a[i]<mid)
       b[k++]= a[i++];
    
      while(a[j]<last)
       b[k++]= a[j++];
    
    k=0; 
    for(i= beg; i<last; i++)
      a[i]= b[k++];
      
} 


void merge_sort(int a[], int beg, int last){
    while(beg<last){
        int mid = last+ (last-beg)/2;
        merge_sort(a, beg, mid);
        merge_sort(a, mid+1, last);
        merge(a, beg, mid, last);
    }
} 
 
  

int main() {
	int n=0; 
	printf("Enter the array length\n");
	scanf("%d", &n);
	int a[n];
	printf("enter the array length\n");
	for(int i=0; i<n; i++)
	scanf("%d", &a[i]);
	merge_sort(a, 0, n);
	printf("\n Sorted array is \n\n");
	for(int i=0; i<n; i++)
	printf("%d  ", a[i]);
	return 0;
}
