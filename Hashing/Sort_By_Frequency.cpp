Ps:IF TWO ELEMENTS POSSESS SAME FREQUENCIES THE GREATEST ELEMENT WILL BE PRIORITIZED
/*INPUT:
10
2 5 2 6 -1 9999999 5 8 8 8 
OUTPUT:
8 8 8 5 5 2 2 9999999 6 -1 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
int n,k;
cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
  cin>>k;
  mp[k]++;
}
map<int,vector<int>,greater<int>>m;
for(auto i:mp){
  m[i.second].push_back(i.first);
}
for(auto i:m){
  sort(i.second.begin(),i.second.end(),greater<int>());
  for(auto j:i.second){
    for(k=0;k<i.first;k++){
      cout<<j<<" ";
    }
  }
}
}
