/*INPUT:
5 6
0 1
0 2
1 2
2 3
3 4
2 4
OUTPUT:
2
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
vector<bool>visited,ap;
vector<int>disc,low,parent;
void dfs(int u){
	static int t = 0; 

	int children = 0; 

	visited[u] = true; 

	disc[u] = low[u] = ++t; 
	for (auto i :mp[u]) 
	{ 
 	int v = i;
  if (!visited[v]) 
	{ 
    children++; 
    parent[v] = u; 
    dfs(v); 
    low[u] = min(low[u], low[v]); 
      if (parent[u] == -1 && children > 1){ap[u] = true; }
			if (parent[u] != -1 && low[v] >= disc[u]){ap[u] = true; }
		} 

		else if (v != parent[u]) 
			low[u] = min(low[u], disc[v]); 
	} 
}
void Articulation_Point(int V){
  parent.resize(V,-1);
  ap.resize(V);
  visited.resize(V);
  disc.resize(V);
  low.resize(V);
  for(auto i:mp){
    if(!visited[i.first]){
      dfs(i.first);
    }
  }
  for(int i=0;i<V;i++){
    if(ap[i]==true){
      cout<<i<<" ";
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
Articulation_Point(V);
}
