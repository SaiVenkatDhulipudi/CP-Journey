#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n;
  cin>>n;
  string s;
s=bitset<32>(n).to_string();
int k=log2(n);
s=s.substr(s.length()-k-1,s.length());
cout<<s<<endl;
}
