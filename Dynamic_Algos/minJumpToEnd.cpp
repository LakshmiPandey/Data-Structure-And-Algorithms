// minimun jump t reach the end 

#include<cstdio>
#include<limits.h>
using namespace std;


int min(int a, int b){
    return(a>b)? b: a;
}


int minJump(int arr[], int beg, int n){
    int *jump = new int[n];
    if (n == 0 || arr[0] == 0) 
        return INT_MAX; 
    jump[0]=0;
        
    for (int i = 1; i < n; i++)  { 
        jump[i] = INT_MAX; 
        for (int j = 0; j < i; j++) { 
            if (i <= j + arr[j] && jump[j] != INT_MAX)  { 
                 jump[i] = min(jump[i], jump[j] + 1); 
                 break; 
            } 
        } 
    } 
    return jump[n-1];
}

int main() {
	int n=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
	 scanf("%d", &a[i]);
	 printf("minimum jumps required is %d",  minJump(a, 0, n-1));
	return 0;
}
