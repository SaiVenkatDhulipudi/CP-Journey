/*INPUT:
4 3
1 0 0
1 1 1
1 0 0
1 1 1
OUTPUT:
1 0 0 
1 1 1 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  int n,m;
  cin>>n>>m;
set<vector<int>>dis;
vector<int>v(m);
while(n--){
  for(int j=0;j<m;j++){
    cin>>v[j];
  }
  dis.insert({v.begin(),v.end()});
}
for(auto i:dis){
  for(auto j:i){
    cout<<j<<" ";
  }
   cout<<endl;
}
}
