/*
INPUT:
a1b1c3;
5
OUTPUT:
c
(abccc)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s,s1;
cin>>s;
int n;
cin>>n;
for(int i=0;i<s.length();i++){
if(isdigit(s[i])){
  for(int j=0;j<(s[i]-'0');j++){
    s1.push_back(s[i-1]);
  }
}
}
cout<<s1[n-1]<<endl;
}
