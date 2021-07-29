/*INPUT:
5
0 1
0 2
1 3
2 3
1 2
0
OUTPUT:
0 1 1 2
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,bool>visited;
map<int,list<int>>mp;
map<int,int>paths;
void shortestpath(int s){
  queue<int>q ;
  visited[s]=true;
  q.push(s);
  paths[s]=0;
  while(q.empty()==false){
    int u=q.front();
    q.pop();
    for(int v:mp[u]){
      if(visited[v]==false){
        visited[v]=true;
        paths[v]=paths[u]+1;
        q.push(v);
      }
    }
  }
}
void add_edge(int s,int d){
  mp[s].push_back(d); 
}
int main() {
 int n;
 cin>>n;
 int s,d,source;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(s,d);
 }
 cin>>source;
 shortestpath(source);
 for(auto i:paths){
   cout<<i.second<<" ";
 }
}
