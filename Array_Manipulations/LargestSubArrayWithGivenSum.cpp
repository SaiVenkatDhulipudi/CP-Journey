/*
INPUT:
20
1 12 18 13 8 -2 12 -1 -10 6 3 -14 0 4 10 0 -7 3 -12 18
30
OUTPUT:
13 8 -2 12 -1 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,vector<int>>l;
void print(vector<int>&v,int k,int j){
    for(int i=j+1;i<k+1;i++){
      l[k+1].push_back(v[i]);
    }
}
int main() {
  int n,sum,subarray=0,sum1=0;;
  cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
cin>>sum;
map<int,int>mp;
for(int i=0;i<n;i++){
  sum1+=v[i];
  if(sum1==sum){
    subarray=i+1;
  }
  if(mp.find(sum1)==mp.end()){
   mp.insert({sum1,i});
  }
 if( mp.find(sum1-sum)!=mp.end()){
  subarray=max(subarray,i-mp[sum1-sum]);
  print(v,i,mp[sum1-sum]);
 }
}
for(auto i:l){
  if(i.second.size()==subarray){
    for(auto j:i.second){
      cout<<j<<" ";
    }
  }
}
}
