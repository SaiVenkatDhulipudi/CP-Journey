/*
i/p:hello i am sai venkat
o/p:venkat sai am i hello 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s,s1;
getline(cin,s);
stack<string>st;
istringstream s2(s);
 while(s2>>s1){
   st.push(s1);
 }
 while(!st.empty()){
   cout<<st.top()<<" ";
   st.pop();
 }
}
