/*INPUT:
5 5
1 0 
0 2 
2 1 
0 3 
3 4
OUTPUT:
3 4
0 3
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
vector<bool>visited;
vector<int>disc,low,parent;
void dfs(int u){
static int t = 0; 
visited[u] = true; 
disc[u] = low[u] = ++t; 
for (auto i :mp[u]) 
{ 
int v = i;
if(!visited[v]) 
{ 
parent[v] = u; 
dfs(v); 
low[u] = min(low[u], low[v]); 
if(low[v] > disc[u]) {
cout << u <<" " << v << endl; 
} 
}
else if (v != parent[u]) 
low[u] = min(low[u], disc[v]); 
	} 
}
void bridge(int V){
parent.resize(V,-1);
visited.resize(V);
disc.resize(V);
low.resize(V);
for(auto i:mp){
if(!visited[i.first]){
dfs(i.first);
    }
  }
}
void addedge(int s,int d){
  mp[s].push_back(d);
  mp[d].push_back(s);
}
int main() {
int V,n,s,d;
cin>>V>>n;
for(int i=0;i<n;i++){
  cin>>s>>d;
  addedge(s,d);
}
bridge(V); 
}
