/*input:
6
-5 -1 -8 3 4 2 
output:
-5 -1 -8 3 4 2
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
int i=0,j=0;
for(i=0;i<n;i++){
  if(v[i]<0){
    swap(v[i],v[j]);
    j++;
  }
}
for(auto i:v){
  cout<<i<<" ";
}
}
