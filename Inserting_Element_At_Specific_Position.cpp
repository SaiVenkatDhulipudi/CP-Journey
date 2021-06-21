#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int pos,key;
        cin>>pos>>key;
        v.insert(v.begin()+pos,key);
    }
    int k=v.back();
   for(auto i:v){
      if(i==k){
        cout<<k<<endl;
      }
      else{
      cout<<i<<"->";
    }
    }
}
