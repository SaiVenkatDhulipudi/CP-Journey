/*Program the logic to filter digits from a long number 
and return missing digits [0-9] in descending order with no repetitions.
Instructions: Eg for an input 87653210 the result is 94 
for an input 2844412 the result is 976530*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s;
cin>>s;
map<int,int>mp;
for(int i=0;i<s.length();i++){
  mp[s[i]-'0']++;
}
for(int i=9;i>=0;i--){
  if(mp[i]==0){
    cout<<i;
  }
}
}

