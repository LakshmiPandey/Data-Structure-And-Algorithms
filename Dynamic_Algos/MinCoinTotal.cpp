/*Find the minimun no of coins needed from the given 
subset of coins to get the required total, 
given the infinite supply coins 
*/

#include<bits/stdc++.h>
using namespace std;


int minCoinBottomUp(int coin[], int n, int total){
	int t[total+1], r[total+1];
	int i=0;int j=0;
	for(i=0; i<=total; i++){
	  t[i]= INT_MAX;
	  r[i]= -1;
	}

	for(i=0; i<n; i++){

	 for(j=coin[i]; j<=total; j++){

	   if(t[j- coin[i]]+1 < t[j]){

	     t[j]= t[j- coin[i]]+1;
	     r[j]= i;
	    }

	  }
	}

	if(r[total]== -1)
	  printf("\n No solutiono possible \n");
    
    else
    {
      int start = total;
      printf("\n Coins needed to form the sum are: \n");
      while(start != 0){
        int j = r[start];
        printf("%d  +  " );
        start = start - coin[j];
      }
      printf("\n\n");
    }
	return t[total];
}


int main(){
	printf("\n Enter no of coins and the total sum\n");
	int total, n;
	scanf("%d, %d", &n, &total);
	int coin[n];
	printf("\n Enter the coin available\n\n");
	for(int i=0; i<n; i++)
	 scanf("%d", coin[i]);
    printf("\n\n total no of coins needed are %d",  minCoinBottomUp(coin,  n, total));
    return 0; 
    
	}