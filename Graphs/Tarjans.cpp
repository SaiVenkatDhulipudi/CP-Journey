/*INPUT:
5 5
1 0 
0 2 
2 1 
0 3 
3 4
OUTPUT:
4
3
1 2 0
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
vector<bool>visited;
vector<int>disc,low;
stack<int>st ;
void dfs(int u){
  st.push(u);
	static int t = 0; 
	visited[u] = true; 
	disc[u] = low[u] = ++t; 
	for (auto v :mp[u]) 
	{ 
	  if(disc[v]==-1){
	    dfs(v);
	    low[u]=min(low[v],low[u]);
	  }
	  else if(visited[v]){
	    low[u]=min(low[u], disc[v]);
	  }
	}
	int w=0;
	if(low[u]==disc[u]){
	  while(st.top()!=u){
	    w=st.top();
	    cout<<w<<" ";
	    visited[w]=false;
	    st.pop();
	  }
	  w=st.top();
	    cout<<w<<"\n";
	    visited[w]=false;
	    st.pop();
	}
}
void bridge(int V){
  visited.resize(V);
  disc.resize(V,-1);
  low.resize(V,-1);
  for(auto i:mp){
    if(disc[i.first]==-1){
      dfs(i.first);
    }
  }
}
void addedge(int s,int d){
  mp[s].push_back(d);
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
