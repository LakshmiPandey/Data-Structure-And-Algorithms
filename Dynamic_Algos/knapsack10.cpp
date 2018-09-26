// dynamic implementation of knapsack 0/1 problem


#include <iostream>
#include<cstdio>
using namespace std;


int max(int a, int b){
    if(a>b)
    return a; 
    return b;
}
int knapsack(int W, int wt[], int val[], int n){
    int t[n+1][W+1];
    int i=0, j=0;
    for(i=0; i<=n; i++)
      t[i][0]=0;
    for(i=0; i<=W; i++)
      t[0][i]=0;
    for(i=1; i<=n; i++)
      for(j=1; j<=W; j++)
         if(j<wt[i])
           t[i][j] = t[i-1][j];
          else
          t[i][j]= max(t[i-1][j], t[i-1][j-wt[i]]+val[i]);
          
    return t[n][W];      
}


int main() {
	int n, i=0, W;
	printf("Enter max weight available\n");
	scanf("%d", &W);
	printf("Enter no of items available\n");
	scanf("%d", &n);
	int wt[n], val[n];
	printf("Enter the weights and corresponding value for each item\n");
	for(i=0; i<n; i++){
	    scanf("%d", &wt[i]);
	    scanf("%d", &val[i]);
	}
	i = knapsack(W, wt, val, n);
	printf("\n\nMax profit: %d", i);
	return 0;
}
