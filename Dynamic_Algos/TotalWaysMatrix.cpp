// total no of ways to reach the bottom of any matrix


#include<cstdio>
using namespace std;

int totalWays(int n, int m){
    int t[n][m];
    int i=0;
    for(i=0; i<n; i++)
     t[i][0]=1;
    for(i=1; i<m; i++)
     t[0][i]=1;
    for(i=1; i<n; i++)
     for(int j=1;j<m; j++)
      t[i][j]= t[i-1][j]+t[i][j-1];
    return t[n-1][m-1];  
}

int main() {
	int n, m;
	printf("\n Enter no of rows and no of columns");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("\n Total no of ways to reach bottom : %d", totalWays(n,m));
	
		return 0;
}
