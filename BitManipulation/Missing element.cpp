/*input n=3
  1 4 3
  output 2(2 is missing from the given array)*/
  #include <bits/stdc++.h>
using namespace std;
int missingelement(vector<int>v,int n){
  int index=n^n+1,val=0;
  for(int i=0;i<n;i++){
  index^=i;
  val^=v[i];
}
int k=index^val;
return k;
}

int main() {
int n;
cin>>n;
int i;
vector<int>v(n);
for(i=0;i<n;i++){
  cin>>v[i];
}
cout<<missingelement(v,n);

}
