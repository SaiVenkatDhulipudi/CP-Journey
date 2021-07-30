/*
INPUT:
4 5
0 1 1
0 2 4
1 2 -3
1 3 2
2 3 3
OUTPUT:
shortest path from 0 to:
0	0
1	1
2	-2
3	1
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
vector<int>dist;
map<pair<int,int>,int>weight;
void BellmanFord(int V,int s){
  int res=0;
 dist.resize(V,INT_MAX);
  dist[s]=0;
  for(int c=1;c<V-1;c++){
  for(auto i:mp){
   for(auto j:i.second){
     int u=i.first;
     int v=j;
     int w=weight[{u,v}];
     if (dist[u]!=INT_MAX && (dist[u]+w)<dist[v]){
	dist[v] = dist[u] + w;
     }
   }
  }
  for(auto i:mp){
   for(auto j:i.second){
     int u=i.first;
     int v=j;
     int w=weight[{u,v}];
     if (dist[u] != INT_MAX && (dist[u]+w )< dist[v]) { 
	cout<<"Graph contains negative weight cycle"; 
         return; 
	}
   }
  }
  }
  cout <<"shortest paths from "<<s<<" to:"<<endl;
    for(int i=0;i<V;i++){
    cout<<i<<"\t"<<dist[i]<<endl;
    }
}
void addedge(int s,int d,int w){
  mp[s].push_back(d);
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
  BellmanFord(V,source);
}
