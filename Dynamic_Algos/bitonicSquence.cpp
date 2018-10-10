// Finding the longest bitonic sequence in an array

#include <cstdio>
using namespace std;

int max(int a, int b){
    return (a>b? a: b);
    
}
int bitonic(int arr[], int n){
    int a[n];
    int i=0;
    for(; i<n; i++)
     a[i]=1;
     
    i=1;
    while(i<n){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i])
             a[i] = max(a[i], a[j]+1);
        }
        i++;
    }
    
    i=n-2;
    while(i>=0){
        for(int j=n-1; j>i; j--){
            if(arr[j]<arr[i])
             a[i] = max(a[i], a[j]+1);
          }
          i--;
        }
        
   int max = a[0];
   for(i=0; i<n; i++)
    if(max<a[i])
     max= a[i];

    return max;     
}
int main() {
	int n;
	printf("\n Enter  array length  : \n");
	scanf("%d", &n);
	int arr[n];
	printf("\n Enter array elements :\n");
	for(int i=0; i<n; i++)
	 scanf("%d", &arr[i]);
	printf("\n the longest bitonic sequence is : %d", bitonic(arr, n));
	return 0;
}
