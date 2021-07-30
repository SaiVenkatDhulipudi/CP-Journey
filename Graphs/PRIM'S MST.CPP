/*
INPUT:
5 7
0 1 2
0 3 6
1 3 8
1 4 5
3 4 9
1 2 3
2 4 7
OUTPUT:
16
*/
#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
map<int,bool>mSet;
map<pair<int,int>,int>weight;
int primsalgo(int V){
  int res=0;
  vector<int>key(V,INT_MAX);
  key[0]=0;
  for(int c=0;c<V;c++){
    int u = -1;
  for(int i=0;i<V;i++){
		    if(!mSet[i]&&(u==-1||key[i]<key[u])){
		        u=i;
		mSet[u] = true; 
		res+=key[u]; 
  }
  }
  for (int j = 0; j < V; j++) {

			if (weight[{u,j}]!=0 && mSet[j] == false) 
				key[j] = min(key[j],weight[{u,j}]); 
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
