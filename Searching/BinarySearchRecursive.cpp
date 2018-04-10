//...................Recursion method ......................

#include<iostream>
using namespace std;
int binary_search(int arr[], int b, int l, int ele);
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

	/*Function calling binary search*/
	pos = binary_search(arr ,n , 0 ,ele);

	/* printing the postion of the elemnet found*/
	if(pos == -1)
	cout<<"\n Element not found the the given array\n";
	else 
	cout<<"\n Element is found at the position "<<pos<<" in the array";

	return 0;
}


/* Defining binary search function */
int binary_search(arr[], int b, int l, int ele)
{
	if (l >= b)
   {
        int mid = b + (l - b)/2;
        if (arr[mid] == ele)  
            return mid;
        if (arr[mid] > x) 
            return (binarySearch(arr, l, mid-1, x));
        return (binarySearch(arr, mid+1, r, x));
   }
  return(-1);
//...................Recursion method ......................

#include<iostream>
using namespace std;
int binary_search(int arr[], int b, int l, int ele);
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

	/*Function calling binary search*/
	pos = binary_search(arr ,n , 0 ,ele);

	/* printing the postion of the elemnet found*/
	if(pos == -1)
	cout<<"\n Element not found the the given array\n";
	else 
	cout<<"\n Element is found at the position "<<pos<<" in the array";

	return 0;
}


/* Defining binary search function */
int binary_search(arr[], int b, int l, int ele)
{
	if (l >= b)
   {
        int mid = b + (l - b)/2;
        if (arr[mid] == ele)  
            return mid;
        if (arr[mid] > x) 
            return (binarySearch(arr, l, mid-1, x));
        return (binarySearch(arr, mid+1, r, x));
   }
  return(-1);
}