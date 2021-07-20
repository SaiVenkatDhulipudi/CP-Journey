/*input n=7
  4 4 4 4 3 5 5
  output 3(as 3 element occurred odd no of times)
 input n=8
   4 4 4 4 3 5 5 3
  output 0(as every element occurred even no of times)*/
#include <bits/stdc++.h>
using namespace std;
int OddOccurringNumber(vector<int>&v,int n){
  int res=0;
  for(int i=0;i<n;i++){
    res=res^v[i];
  }
  return res;
}
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
  cin>>v[i];
}
cout<<OddOccurringNumber(v,n);
}
