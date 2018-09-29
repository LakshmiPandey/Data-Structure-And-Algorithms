// SubSet Sum in C++


#include <iostream>
#include<cstdio>
using namespace std;

int max(int a, int b){
    if(a>b) return a;
    return b;
}
int subsetSum(int a[], int n, int sum){
    int t[n+1][sum+1], i=0;
    
    for( i=0; i<=n; i++)
      t[i][0]= 1;
      
    for( i=1; i<=sum; i++)
       t[0][i]= 0;
       
    for( i=1; i<n; i++){
        for(int j =1; j<sum+1; j++){
            if(j>= a[i])
              t[i][j] = max(t[i-1][i], t[i-1][j-a[i]]);
             else 
               t[i][j] = t[i-1][j];
          
      }
    }
    return t[n][sum]; 
}
int main() {
	int max_sum=0,  n=0;
	printf("\n Enter the maximum sum and the array length\n");
	scanf("%d, %d", &max_sum, &n);
	int arr[n];
	for(int i=0; i<n; i++)
	scanf("%%d", &arr[i]);
	if(subsetSum(arr, n, max_sum)== 1 )
	   printf("\n Found the subset with the required sum\n");
	else 
	  printf("\n Not found any subset\n\n");
	return 0;
}
