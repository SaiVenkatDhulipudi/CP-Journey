/*INPUT:
6
0 1
1 2
1 3
2 3
2 4
2 5
OUTPUT:
CYCLE DETECTED
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,bool>visited;
map<int,list<int>>mp;
bool dfsrec(int s,int parent){
  visited[s]=true;
  for(auto v:mp[s]){
    if(visited[v]==false){
      if(dfsrec(v,s)==true){
        return true;
      }
    }
    else if(v!=parent){
      return true;
    }
  }
  return false;
}
bool dfs(int n){
  for(auto i:mp){
    if(visited[i.first]==false){
      if(dfsrec(i.first,-1)){
        return true;
      }
    }
  }
  return false;
}
void add_edge(int s,int d){
  mp[s].push_back(d); 
  mp[d].push_back(s); 
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
