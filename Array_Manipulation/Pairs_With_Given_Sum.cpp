/*INPUT:
10
3 3 6 0 4 2 5 1 7 7 
6
OUTPUT:(NON CONTIGUOUS PAIRS)
(3,3)
(4,2)
(5,1)
(6,0)*/

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairs;
void pairsofgivensum(vector<int>&v,int n,int sum){
  set<pairs>mp;
vector<int>::iterator it;
for(int i=0;i<n;i++){
  it=find(v.begin(),v.end(),sum-v[i]);
  if(it!=v.end()){
    if(mp.find({*it,v[i]})==mp.end()){
    pairs x=make_pair(v[i],*it);
    mp.insert(x);
  }
  }
}
for(auto k:mp){
  cout<<"("<<k.first<<","<<k.second<<")"<<endl;
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
pairsofgivensum(v,n,sum);
}
