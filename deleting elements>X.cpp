#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int k;
vector<int>a;
for(int j=0;j<n;j++){
  cin>>k;
  a.push_back(k);
}
int key;
cin>>key;
for (auto i = a.begin(); i != a.end(); ++i){
  if(*i>=key){
    a.erase(i);
    i--;
  }
}
for(auto i:a){
  cout<<i<<" ";
}

}
