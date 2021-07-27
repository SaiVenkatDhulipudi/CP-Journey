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
0 1 2 3 4 5 6 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(map<int,list<int>>&mp,int v){
  map<int,bool>isvisited;
  for(auto i:mp)
  {
    if(isvisited[i.first]==false)
    {
      isvisited[i.first]=true;
      cout<<i.first<<" ";
    }
    for(auto j:i.second){
      if(isvisited[j]==false)
      {
        cout<<j<<" ";
        isvisited[j]=true;
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
 int s,d;
 for(int i=0;i<n;i++){
   cin>>s>>d;
   add_edge(mp,s,d);
 }
 dfs(mp,v);
}
