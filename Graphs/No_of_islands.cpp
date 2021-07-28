/*INPUT:
7 7
0 1
0 2
2 3
1 3
4 5
5 6
4 6
OUTPUT:
2 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void bfs(map<int,list<int>>&mp,int v,vector<bool>&visited,int s){
  std::queue<int>q ;
  visited[s]=true;
  q.push(s);
  while(q.empty()==false){
    int u=q.front();
    q.pop();
    for(int v:mp[u]){
      if(visited[v]==false){
        visited[v]=true;
        q.push(v);
      }
    }
  }
}
int BFSDIS(map<int,list<int>>&mp,int v){
  int count=0;
  vector<bool>visited(v+1,false);
  for(int i=0;i<v;i++){
    if(visited[i]==false){
      bfs(mp,v,visited,i);
      count++;
    }
  }
  return count;
}
void add_edge(map<int,list<int>>&mp,int s,int d){
  mp[s].push_back(d);
  mp[d].push_back(s);
}
int main() {
 int n,v;
 cin>>v>>n;
 map<int,list<int>>mp;
 int s,d;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(mp,s,d);
 }
 cout<<BFSDIS(mp,v);
}
