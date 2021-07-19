/*INPUT:
3
3
-200 3 4
4
-1 -2 4 8
4
1 2 3 4
OUTPUT:
-2400
16
24*/
#include <bits/stdc++.h>
using namespace std;
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
if(n==3){
  cout<<v[0]*v[1]*v[2]<<endl;
}
else if(n>3){
sort(v.begin(),v.end());
cout<<max((v[0]*v[1]*v[n-1]),v[n-1]*v[n-2]*v[n-3])<<endl;
}
else{
cout<<"invalid input"<<endl;
}
}
}
