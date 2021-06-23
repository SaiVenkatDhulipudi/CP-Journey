 You will be given a string n which is a number,you need to check whether that number is autobiographical number(ABN) or not.If n is an ABN print the number by ommiting the first digit,otherwise return 0.
           An ABN is a number n such that the first digit of n represents the count of how many zeros are there in n, second digit represents the count of how many ones are there in n and so on....
Constraints:n<=10
Sample input: 1210
Sample output:210
Explanation: In zeroth index there is 1,which means 1 zero in n. In first index there is 2 which means there are 2 one's in n. In second index there is 1 which means 1 two in n. In third index there's 0 which mean 0 three in n. So n is an ABN. Output will be 210 ( 1 should be removed as n is ABN)

SOLUTION:
#include <bits/stdc++.h>
using namespace std;

int main() {
string s,s0,s1;
cin>>s;
s0=s[0];
s1=s[1];
int zero=stoi(s0);
int one =stoi(s1);
int z=0,o=0;
for(int i=0;i<s.length();i++){
  if(s[i]=='1')o++;
  else if(s[i]=='0')z++;
}
if(zero==z&&one==o){
 string sub=s.substr(1,s.length());
  cout<<sub<<endl;
}
else{
  cout<<"0"<<endl;
}
return 0;
}
