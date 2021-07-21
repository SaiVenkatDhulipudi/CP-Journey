/*INPUT:
4
7
10 20 20 10 30 40 10
4
6
10 10 5 3 20 5
4
4
10 10 10 10
3
4
10 20 30 40
3
OUTPUT:
2 3 4 3 
3 4 3 
1 1 
3 3 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void frequencyofwindowK(vector<int>&v,int n,int k){
  std::map<int,int>mp;
  for(int i=0;i<k;i++){
    mp[v[i]]++;
  }
  cout<<mp.size()<<" ";
  for(int i=k;i<n;i++){
    mp[v[i-k]]-=1;
    if (mp[v[i - k]] == 0) { 
            mp.erase(v[i-k]); 
        }
        mp[v[i]]+=1;
        cout<<mp.size()<<" ";
  }
  cout<<endl;
}
int main() {
  int T;
  cin>>T;
  while(T--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
 cin>>v[i];
}
int k;
cin>>k;
frequencyofwindowK(v,n,k);
}
}
