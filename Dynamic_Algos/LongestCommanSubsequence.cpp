// Longest comman subsequence implmentation in C++

#include <iostream>
#include<cstdio>
using namespace std;

int max(int a, int b){
    if(a>b) return a;
    return b;
}

int LCS(char *A, char *B, int n, int m){
    int l[n+1][m+1];
    for(int i=0; i<=n; i++)
      for(int j=0; j<=m; j++)
        if(i==0||j==0)
           l[i][j]=0;
        else if(A[i-1]==B[j-1])
           l[i][j] = l[i-1][j-1]+1;
        else
            l[i][j] = max(l[i-1][j], l[i][j-1]);
    
    return l[n][m];        
}
int main() {
	int n, m;
	printf("Enter the oder of two strings\n");
	scanf("%d, %d", &n, &m);
	char A[n], B[m];
	printf("\n Enter the string values of first string\n");
	for(int i=0; i<n; i++)
	  scanf("%c", &A[i]);
	printf("\n Enter the string values of second string\n");
	for(int i=0; i<m; i++)
	  scanf("%c", &B[i]);
	int c = LCS(A, B, n, m);
	printf("\n\nThe required longest subsequence is %d", c);
	return 0;
}
