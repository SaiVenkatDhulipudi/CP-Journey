/*INPUT:
3
0 1
0 2
3 4
OUTPUT:
0 1 2 3 4  
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,vector<int>>mp;
map<int,bool>visited;
void dfs(int s)
{
  visited[s]=true;
  cout<<s<<" ";

for(auto i:mp[s]){
  if(visited[i]==false){
    dfs(i);
  }
}
}
void dfsdis(int n){
  for(auto i:mp){
    if(visited[i.first]==false){
      dfs(i.first);
    }
  }
}
  
void addedge(int s,int d){
  mp[s].push_back(d);
  mp[d].push_back(s);
}
int main() {
int n,s,d;
cin>>n;
  for(int i=0;i<n;i++){
    cin>>s>>d;
    addedge(s,d);
  }
  dfsdis(n);
}
