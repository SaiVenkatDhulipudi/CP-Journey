INPUT:
V=5 N=7
0 1
0 2
1 2
1 3
2 4
3 4
2 3
SOURCE =0
OUTPUT:
0 1 2 3 4 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void bfs(map<int,list<int>>&mp,int v,int s){
  vector<bool>visited(v,false);
  std::queue<int>q ;
  visited[s]=true;
  q.push(s);
  while(q.empty()==false){
    int u=q.front();
    q.pop();
    cout<<u<<" ";
    for(int v:mp[u]){
      if(visited[v]==false){
        visited[v]=true;
        q.push(v);
      }
    }
  }
}
void add_edge(map<int,list<int>>&mp,int s,int d){
  mp[s].push_back(d);
  mp[d].push_back(s);
}
int main() {
 int n,v;
 cin>>v>>n;
 map<int,list<int>>mp;
 int s,d,source;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(mp,s,d);
 }
 cin>>source;
 bfs(mp,v,source);
}
