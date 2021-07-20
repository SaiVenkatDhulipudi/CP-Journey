/*
INPUT:
8
3 4 7 1 3 3 1 7
7
OUTPUT:
5
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  int n,sum,subarray=0;
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
    subarray++;
  }
  mp[sum1].push_back(i);
}
cout<<subarray<<endl;
}
