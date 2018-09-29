// quick sort implementation in C++

#include <iostream>
#include<cstdio>
using namespace std;


/*int swap(int *a, int *b){
    a = a+b;
    b = a-b;
    a = a-b;
}*/

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<=high-1; j++){
        if(pivot>=arr[j]){
            i++;
            arr[i]= arr[i]+arr[j];
            arr[j]= arr[i]-arr[j];
            arr[i]= arr[i]-arr[j];
        }
    }
    i+=1;
    arr[i]= arr[i]+arr[high];
    arr[high]= arr[i]-arr[high];
    arr[i]= arr[i]-arr[high];
    return i;
}

void quick(int arr[], int beg, int last){
    if(beg<last){
        int pi = partition(arr, beg, last);
        quick(arr, beg, pi);
        quick(arr, pi+1, last);
    }
}
int main() {
	int n=0; 
	printf(" \n Enter the array length\n");
	scanf("%d", &n);
	int arr[n];
	printf("\n Enter array element\n");
	for(int i=0; i<n;  i++)
	scanf("%d", &arr[i]);
	quick(arr, 0, n);
	printf(" \n sorted array is");
	for(int i=0; i<n; i++)
	printf("%d ", arr[i]);
	return 0;
}
