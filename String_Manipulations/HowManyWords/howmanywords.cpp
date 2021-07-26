/*input1:
How many eggs are in a half-dozen, 13?
output:7
input2:
he is a good programmer, he won 865 competitions, but sometimes he dont. What do you think? All test-cases should pass. Done-done?
output: 21
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s,s1;
getline(cin,s);
istringstream s2(s);
int c=0;
 while(s2>>s1){
   string s3;
   for(int i=0;i<s1.length();i++){
     if(isalpha(s1[i])){
       s3.push_back(s1[i]);
     }
   }
   if(s3.size()>0){
   c++;
}
 }
 cout<<c<<endl;
}
