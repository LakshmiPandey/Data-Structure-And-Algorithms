// Longest increasing subsequence implmentation in c++

#include<cstdio>
#include <iostream>
using namespace std;


int longestSubsequence(int a[], int n){
    int arr[n];
    int i=0;
    for(i=0; i<n; i++)
     arr[i]=1;
    
    int j=0;
    i=1;
    while(i<n){
        j=0;
        while(j<i){
            if(a[j]<a[i]){
                arr[i]= max(arr[j]+1, arr[i]);
                
            }
            j++;
        }
        i++;
    }
    return arr[n-1];
}
int main() {
	int n=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i+=0)
	  scanf("%d", &a[i]);
	printf("\n\n Longest subsequesnce in the given array has size %d ", longestSubsequence(a,n)); 
	return 0;
}
