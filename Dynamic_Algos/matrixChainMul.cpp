// Matrix chain multiplication problem implementation
// Matrix chain multiplication implmentation in c++


#include<iostream>
#include<climits>
#include<cstdio>
using namespace std;


int matrixChainMul(int a[], int n){
   int matrix[n][n];
   int q=0;
   int i=0, j=0, k=0;
   for(i=0; i<n; i++)
     matrix[i][i]=0;
     
  for(int l=2; l<n;l++)
  {
      for(int i=0;i<n-l+2; i++)
       j=l+i-1;
       matrix[i][j] = INT_MAX; 
       for(int k=i; k<j; k++){
           q = matrix[i][k]+matrix[k+1][j] + a[i-1]*a[k]*a[j];
     
       if(q<matrix[i][j])
         matrix[i][j] = q;
       }
  }
    
}
int main() {
   int n=0;
   printf("\n Enter the no of matrix to be multiplied\n");
   scanf("%d", &n);
   n+=1;
   int arr[n];
   printf("\n Enter the dimensions in order\n");
   for(int i=0; i<n; i++)
     scanf("%d", &arr[i]);
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("\n minimum multiplicztion cost is %d", matrixChainMul(arr, size));
	return 0;
}
