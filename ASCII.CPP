#include <bits/stdc++.h>
using namespace std;
int password(vector<int>&a){
for(int i=0;i<a.size();i++){
 if(a[i]==0){
   a[i]==0;
 } 
 else if(a[i]%9==0){
   a[i]==9;
 }
 else{
   a[i]=a[i]%9;
 }
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

for(auto i:v){
  cout<<i<<" ";
}
}
