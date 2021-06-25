/*mr apppu his fond of his name and anagrams.. his fav dish is pappu.. 
so help apppu to find whether pappu is anagram of his name or not...
here anagram is defined as "a word or phrase composed by rearranging the letters in another word or phrase.".
if it is anagram print yes and print his name in reverse order.. else print no..
so take 2 strings as input and check whether they are anagrams or not.

example:-

input 1:
cat
act

output:
(cat reverse) tac

input2:
code
come

output:
no*/

#include <bits/stdc++.h>
using namespace std;

int main() {
string s1,s2;
cin>>s1;
cin>>s2;
string s=s1;
int flag=0;
if(s1.length()==s2.length()){
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
if(equal(s1.begin(),s1.end(),s2.begin())){
  reverse(s.begin(),s.end());
  flag=1;
}
}
if(flag==1){
  cout<<s<<endl;
}
else{
  cout<<"no"<<endl;
}
}
