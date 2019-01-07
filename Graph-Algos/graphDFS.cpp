// depth first search 

#include<iostream>
using namespace std;
int n = 1000;
void DFS(int cost[][1000], int n, int v){
	int visited[n], stk[n], top=0, visit[n];
	for(int i=0; i<n; i++) visited[n]=0;
	visited[v]=1;
	int k=1;
	cout<<" \ the required dfs is \n ";
	cout<<v<<" ";
	while(k<n){
	   for(int j=n; j>=1; j--){
	        if(cost[v][j]!=0&&visited[j]!=1&&visit[j]!=1){
                 visit[j]=1;
                 stk[top]=j;
                 top++;
	        }
	        v= stk[top--];
	        cout<<v<<" ";
	        k++;
	        visit[v]=0; visited[v]=1;
	   }
	}
}
int main(){
	 int cost[1000][1000];
	 cout<<"\n Enter the edge weight (1/0 in case of unweighted) from i to j\n";
	 for(int i=0; i<n; i++)
	    for(int j=0; j<n; j++){
	       cout<<"\n Enter edge from"<<i<<" to "<<j<<"\n";
	       cin>>cost[i][j];
	    }
	    int v;
	    cout<<"\n Enter start index\n";
	    cin>>v;
	    DFS(cost, n, v);
	 return 0;
}
