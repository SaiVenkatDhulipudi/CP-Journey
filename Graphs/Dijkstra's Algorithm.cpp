/*INPUT:
4 5
0 1 50
0 2 100
1 2 30
2 3 20
1 3 200
0
OUTPUT:
0 50 80 100 
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
map<int,bool>visited;
vector<int>dist;
map<pair<int,int>,int>weight;
void Dijkstraalgo(int V,int s){
  int res=0;
 dist.resize(V,INT_MAX);
  dist[s]=0;
  for(int c=0;c<V;c++){
    int u = -1;
  for(auto i:mp){
if(!visited[i.first]&&(u==-1||dist[i.first]<dist[u]))
{
u=i.first;
visited[u] = true; 
  }
  for(auto j:mp[u]){
	if (visited[j] == false) 
	dist[j] = min(dist[j],dist[u]+weight[{u,j}]); 
	} 
  }
  }
    for(auto i:dist){
      cout<<i<<" ";
    }
}
void addedge(int s,int d,int w){
  mp[s].push_back(d);
   mp[d].push_back(s);
  weight[{s,d}]=w;
}
int main(){
  int V,n;
  cin>>V>>n;
int s,d,w,source=0;
  for(int i=1;i<=n;i++){
      cin>>s>>d>>w;
      addedge(s,d,w);
  }
  Dijkstraalgo(V,source);
}
