#include <bits/stdc++.h>
using namespace std;
int password(vector<int>&v){
  int m;
for(int i=0;i<v.size();i++){
  int sum=0;
  while(v[i]>0){
  m=v[i];
m=v[i]%10;    
sum=sum+m;    
v[i]=v[i]/10;

  }
  v[i]=sum;
}
}

int main() {
	vector<int>v;
char c;
while(cin>>c){
  int k= int(c);
v.push_back(k);
}

password(v);
password(v);
for(auto i:v){
  cout<<i<<" ";
}
}
