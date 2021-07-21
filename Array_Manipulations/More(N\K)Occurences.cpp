/*input:
2
8
30 10 20 20 20 10 30 30
4
9
30 10 20 30 30 40 30 40 30
output:
20 30 
30 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  int T;
  cin>>T;
  while(T--){
int n,a;
cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
  cin>>a;
  mp[a]++;
}
int k;
cin>>k;
for(auto i:mp){
  if(i.second>n/k){
    cout<<i.first<<" ";
  }
}
cout<<endl;
}
}
