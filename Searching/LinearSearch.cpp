#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int ele);

int main()
{
	int n=0 , ele, pos;
	cout<<"\n Enter array size\n";
	cin>>n;
	int arr[n];
	cout<<"\n Enter array elements\n";
	for(int i=0;i<n;i+)
	{
	   cin>>arr[i];
	}
	cout<<"\n Enter the element to be searched\n";
	cin>>ele;

	/*Function calling linear search*/
	pos = binary_search(arr ,n, ele);

	/* printing the postion of the element found*/
	if(pos == -1)
	cout<<"\n Element not found the the given array\n";
	else 
	cout<<"\n Element is found at the position "<<pos<<" in the array";

	return 0;
}

/* Defining linear search function */
int linear_search(arr[], int n, int ele)
{
	for(int i=0; i<n; i++)
		if(arr[i] == ele)
			return(i+1);
		return(-1);
}
