//KHAN'S DFS
/*INPUT:
7 7
0 1 2 
0 4 1 
1 2 3 
4 2 2 
4 5 4 
2 3 6 
5 3 1
0
OUTPUT:
0 2 3 6 1 5 */
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
map<int,bool>visited;
map<pair<int,int>,int>weight;
std::stack<int>st ;
#define INF INT_MAX 
void dfs(int vertex){
  visited[vertex]=true;
  for(auto j:mp[vertex]){
    if(visited[j]==false){
      dfs(j);
    }
  }
  st.push(vertex);
}
  
void shortestpath(int s,int V){
  for(auto i:mp)
  {
    if(visited[i.first]==false){
      dfs(i.first);
    }
  }
  vector<int>dist(V,INF);
  dist[s]=0;
  while(!st.empty()){
    int u=st.top();
    st.pop();
    for(auto v:mp[u]){
      if(dist[v]>dist[u]+weight[{u,v}]){
         dist[v]=dist[u]+weight[{u,v}];
      }
    }
  }
  for(auto i:dist){
    if(i!=INF){
      cout<<i<<" ";
    }
  }
}

void addedge(int s,int d,int w){
  mp[s].push_back(d);
  weight[{s,d}]=w;
}
int main() {
int V,n;
cin>>V>>n;
int s,d,w,source;
for(int i=0;i<n;i++){
  cin>>s>>d>>w;
  addedge(s,d,w);
}
cin>>source;
shortestpath(source,V);
}
