// count total no of binary  tree  given n
// N  = no of nodes

#include <cstdio>
using namespace std;

int totalBinary(int n){
    n= n+1;
    int t[n];
    t[0]=1;
    if(n>0){
        t[1]=1;
    for(int i=2; i<n; i++){
        t[i]=0;
        for(int j=0; j<i; j++)
          t[i]= t[i]+t[j]*t[i-j-1]; // Catalan number

      }
    }
    return t[n-1];
}
int main() {
	int n;
	printf("\n Enter no of nodes: \n");
	scanf("%d", &n);
	int v = totalBinary(n);
	printf(" \n Total no of binary tree possible : %d", v);
	return 0;
}
