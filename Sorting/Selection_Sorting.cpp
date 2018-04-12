// -------------------------Selection sorting------------------------

#include<iostream>
using namespace std;

//function declaration
void selection_sort(int arr[], int n);

int main(){
	int n=0;
	cout<<"\n enter array length";
	cin>>n;
	int arr[n];
	cout<<"\n enter array elements";
	for(int i=0; i<n; i++)
	cin>>arr[i];
	selection_sort(arr, n);
	cout<<"\n\n Sorted array is \n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}

//Function definition
void selection_sort(int arr[], int n){
   int min=0, pos=0, j=0;
   for(int i=0; i<n-1; i++){
     min=arr[i];
     pos=i;
     for(j=i+1; j<n; j++)
     if(min>arr[j]){
           min=arr[j];
           pos= j;
       }
     arr[i]+=arr[j];
     arr[j]= arr[i]-arr[j];
     arr[j]= arr[i]-arr[j];
   }
}
