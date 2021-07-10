/*Given a string, find the first non-repeating character in it. 
For example, if the input string is “GeeksforGeeks”, 
then the output should be ‘f’ 
and
if the input string is “GeeksQuiz”, 
then the output should be ‘G’.*/

#include <bits/stdc++.h>
using namespace std;
bool compare(std::pair<char ,int> i, pair<char, int> j) 
{
  return i.second < j.second;
}
int main() {
string s;
cin>>s;
map<char,int>m;
for(int i=0;i<s.length();i++){
  m[s[i]]++;
  
}
pair<char,int>min=*min_element(m.begin(),m.end(),compare);
for(int i=0;i<s.length();i++){
 if(m[s[i]]==min.second){cout<<s[i];break;}
  
}

}

