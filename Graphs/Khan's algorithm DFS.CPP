/*INPUT:
7 7
4 1
4 5
4 6
1 2
2 3
5 3
6 7
OUTPUT
4 1 2 5 3 6 7
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,vector<int>>mp ;
map<int,bool>visited;
stack<int>st;
void dfs(int vertex){
  visited[vertex]=true;
  for(auto j:mp[vertex]){
    if(visited[j]==false){
      dfs(j);
    }
  }
  st.push(vertex);
}
void basedfs(int v){
  for(auto i:mp)
  {
    if(visited[i.first]==false){
      dfs(i.first);
    }
  }
  while(!st.empty()){
    int u=st.top();
    st.pop();
    cout<<u<<" ";
  }
}
void addedge(int s,int d){
  mp[s].push_back(d);
}
int main() {
int v,n,s,d;
cin>>v>>n;
for(int i=0;i<n;i++){
cin>>s>>d;
addedge(s,d);
}
basedfs(v);

}
