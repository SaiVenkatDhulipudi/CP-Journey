/*INPUT:
0 2
1 2
1 3
2 4
3 4
2 3
0
OUTPUT:
0 1 2 3 4 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,bool>visited;
map<int,list<int>>mp;
void bfs(int s){
  queue<int>q ;
  visited[s]=true;
  q.push(s);
  while(q.empty()==false){
    int u=q.front();
    cout<<u<<" ";
    q.pop();
    for(int v:mp[u]){
      if(visited[v]==false){
        visited[v]=true;
        q.push(v);
      }
    }
  }
}
void add_edge(int s,int d){
  mp[s].push_back(d);
  mp[d].push_back(s);
}
int main() {
 int n,v;
 cin>>v>>n;
 int s,d,source;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(s,d);
 }
 cin>>source;
 bfs(source);
}
