#include <bits/stdc++.h>
using namespace std;
bool compare(std::pair<char ,int> i, pair<char, int> j) 
{
  return i.second < j.second;
}
int main() {
string s;
getline(cin,s);
std::map<char,int>m ;
int n=s.length();
for(int i=0;i<n;i++){
  m[s[i]]++;
}
pair<char,int>min=*min_element(m.begin(),m.end(),compare);
for(auto i:m){
if(i.second==min.second){
  cout<<i.first<<endl;
}
}
}
