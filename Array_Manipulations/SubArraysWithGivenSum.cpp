/*
INPUT:
8
3 4 7 1 3 3 1 7
7
OUTPUT:
3 4 
7 
1 3 3 
3 3 1 
7 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void print(vector<int>&v,int k,vector<int>index){
  for(auto j:index){
    for(int i=j+1;i<k+1;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
  }
}
int main() {
  int n,sum;
  cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
cin>>sum;
map<int,vector<int>>mp;
mp[0].push_back(-1);
int sum1=0;
for(int i=0;i<n;i++){
  sum1+=v[i];
  auto it=mp.find(sum1-sum);
  if(it!=mp.end()){
    print(v,i,mp[it->first]);
  }
  mp[sum1].push_back(i);
}

}
