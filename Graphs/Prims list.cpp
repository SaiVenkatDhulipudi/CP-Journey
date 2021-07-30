/*INPUT:
4 5
0 1 5
0 2 8
1 2 10
2 3 20
1 3 15
OUTPUT:
28*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
map<int,bool>visited;
vector<int>key;
map<pair<int,int>,int>weight;
int primsalgo(int V){
  int res=0;
 key.resize(V,INT_MAX);
  key[0]=0;
  for(int c=0;c<V;c++){
    int u = -1;
  for(auto i:mp){
		if(!visited[i.first]&&(u==-1||key[i.first]<key[u]))
	{
		u=i.first;
		visited[u] = true; 
		res+=key[u]; 
  }
  for(auto j:mp[u]){
			if (visited[j] == false) 
				key[j] = min(key[j],weight[{u,j}]); 
	} 
  }
  }
    return res;
}
void addedge(int s,int d,int w){
  mp[s].push_back(d);
   mp[d].push_back(s);
  weight[{s,d}]=w;
}
int main(){
  int V,n;
  cin>>V>>n;
int s,d,w;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>s>>d>>w;
      addedge(s,d,w);
    }
  }
  cout<<primsalgo(V);
}
