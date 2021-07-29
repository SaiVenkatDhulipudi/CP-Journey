/*INPUT:
6
0 1
2 1
2 3
3 4
4 5
5 3
OUTPUT:
CYCLE DETECTED
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,bool>visited;
map<int,list<int>>mp;
map<int,bool>restack;
bool dfsrec(int s){
  visited[s]=true;
  restack[s]=true;
  for(auto v:mp[s]){
    if(visited[v]==false and dfsrec(v)==true){
        return true;
    }
    else if(restack[v]){
      return true;
    }
  }
  restack[s]=true;
  return false;
}
bool dfs(int n){
  for(auto i:mp){
    if(visited[i.first]==false){
      if(dfsrec(i.first)){
        return true;
      }
    }
  }
  return false;
}
void add_edge(int s,int d){
  mp[s].push_back(d); 
}
int main() {
 int n;
 cin>>n;
 int s,d;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(s,d);
 }
if(dfs(n)){
  cout<<"CYCLE DETECTED"<<endl;
}
else{
  cout<<"NO CYCLE"<<endl;
}
}
