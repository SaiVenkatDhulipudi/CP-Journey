/*Input:
str = 123
Output: 123
Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.*/
#include <bits/stdc++.h>
using namespace std;
int mi(string s){
  for(int i=0;i<s.length();i++){
    if(isalpha(s[i])){
      return -1;
      break;
    }
  }
  return stoi(s);
}
int main() {
string s;
cin>>s;
cout<<mi(s);
}
