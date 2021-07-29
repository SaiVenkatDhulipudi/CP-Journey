/*INPUT:
7 7
4 1
5 4
4 6
1 2
2 3
3 5
6 7
OUTPUT:
cycle detected*/
#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>>mp;
vector<int>indegree;
bool topologicalsort(int V){
  int c=0;
  queue<int> q; 
  for (int i = 1; i <=V; i++) {
      if (indegree[i] == 0) 
          q.push(i); 
}
while(!q.empty()){
  int u = q.front(); 
        q.pop(); 
        c++;
        for(auto i:mp[u]){
          if(--indegree[i]==0){
            q.push(i);
          }
        }
}
return (c!=V);

}
void addedge(int s,int d){
  mp[s].push_back(d);
    indegree[d]++;
}
int main(){
	int V,n;
	cin>>V>>n;
indegree.resize(V+1);
	int s,d;
	for(int i=0;i<n;i++){
		cin>>s>>d;
    addedge(s,d);
	}
	if(topologicalsort(V)){
	  cout<<"cycle detected"<<endl;
}
else{
  cout<<"cycle not detected"<<endl;
}
}
