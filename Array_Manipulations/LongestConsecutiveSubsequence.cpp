/*input:
5
1 3 9 2 8
output:
3
(1 2 3) is the longest subsequence its size is 3
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int longestconsecutivesubsequence(vector<int>&v,int n){
  unordered_set<int>h(v.begin(),v.end());
  int res=1;
  for(auto x:h){
    if(h.find(x-1)==h.end()){
      int curr=1;
      while(h.find(x+curr)!=h.end()){
        curr++;
        res=max(res,curr);
      }
    }
  }
  return res;
}
int main() {
int n;
cin>>n;
std::vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
cout<<longestconsecutivesubsequence(v,n);
}
