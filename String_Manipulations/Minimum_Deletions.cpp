/*Given a string, reduce it in such a way that all of its substrings are distinct.
To do so, you may delete any characters at any index. 
What is the minimum number of deletions needed?

Note: A substring is a contiguous group of 1 or more characters within a string

Example

s="abab"

Substrings in sare ('a', 'b', 'a', 'b', 'ab', ba', 'ab', aba, bab', 'abab). 
By deleting one "a" and one "b", the string becomes "ab" or "ba" and 
all of its substrings are distinct. This required 2 deletions.*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s;
cin>>s;
unordered_set<char>st;
for(int i=0;i<s.length();i++){
  st.insert(s[i]);
}
cout<<s.length()-st.size();
}
