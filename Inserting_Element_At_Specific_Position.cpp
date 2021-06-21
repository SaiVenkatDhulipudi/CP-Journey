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

INPUT
4
0 2
0 3
1 4
1 5
OUTPUT
3->5->4->2
