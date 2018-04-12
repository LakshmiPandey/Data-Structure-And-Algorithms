//-------------------------Bubble Sort-------------------
#include<iostream>
using namespace std;

// Function declaaration
void Bubble_sort(int arr[], int n);

int main(){
	int n=0;
	cout<<"\n enter array length";
	cin>>n;
	int arr[n];
	cout<<"\n enter array elements";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	Bubble_sort(arr, n);
	cout<<"\n\n Sorted array is \n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}

//Function Definition
void Bubble_sort(int arr[], int n){
   int i=0, flag=1;
   while(flag){
   	  flag=0;
   	  for(i=0; i<n-1; i++)
   	  	if(arr[i]>arr[i+1]){
   	  	   arr[i]+= arr[i+1];
   	  	   arr[i+1]= arr[i]-arr[i+1];
           arr[i]= arr[i]-arr[i+1];
           flag=1;
        }
   }
}