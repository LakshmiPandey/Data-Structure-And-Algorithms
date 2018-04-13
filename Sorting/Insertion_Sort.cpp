#include<iostream>
using namespace std;

//function declaration
void insertion_sort(int arr[], int n);

int main(){
	int n=0;
	cout<<"\n enter array length";
	cin>>n;
	int arr[n];
	cout<<"\n enter array elements";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	insertion_sort(arr, n);
	cout<<"\n\n Sorted array is \n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}

//Function Definition
void insertion_sort(int arr[], int n){
 int i=0, j=0, temp=0;	
 for(i=1;i<=n-1;i++){
     temp=arr[i];
     j=i-1;
        while((temp<arr[j])&&(j>=0)){
           arr[j+1]=arr[j];    
           j=j-1;
         }
        arr[j+1]=temp;    
    }
}