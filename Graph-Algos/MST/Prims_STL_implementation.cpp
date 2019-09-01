#include<bits/stdc++.h>
using namespace std;
void mst(vector<int> &parent, vector<int> &key, vector<bool> &ismst, vector<vector<pair<int, int>>> &graph){
    int src=1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
    pq.push(make_pair(0, src));
    key[src]=0;
    while(!pq.empty()){
        // auto a=pq.top();
        int u= pq.top().second;
        pq.pop();
        ismst[u]= true;
        for(auto x: graph[u]){
            int v= x.first;
            int wt= x.second;
            // cout<<v<<" "<<wt<<"AA";
            if(ismst[v]==false && key[v]>wt){
                key[v]= wt;
                pq.push(make_pair(key[v], v));
                parent[v]=u;
            }
        }
    }
}
int main(){
    int V, e;
    cin>>V>>e;
    int i=0, v, u, wt;
    vector<vector<pair<int, int>>> graph(V+1);
    for(i=0;i<e;i++){
        cin>>u>>v>>wt;
        graph[u].push_back(make_pair(v, wt));
        graph[v].push_back(make_pair(u, wt));
    }
    vector<int>parent(V+1, -1);
    vector<int> key(V+1, 1000005);
    vector<bool>ismst(V+1, false);
    mst(parent, key, ismst, graph);
    return 0;
}
