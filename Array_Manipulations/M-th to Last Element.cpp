#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int>v;
    int i;
    int m;
    cin>>m;
    while(cin>>i){
        v.push_back(i);
    }
    int n=v.size();
    int k=n-m;
    if(m<n){
    cout<<v[k]<<endl;
    }
    else{
        cout<<"NIL"<<endl;
    }
}
