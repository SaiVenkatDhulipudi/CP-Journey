/*Hello All!
So today's coding question is here. 
 You will be given a string n which is a number,
you need to check whether that number is autobiographical number(ABN) or not
If n is an ABN print the number by ommiting the first digit,otherwise return 0.
An ABN is a number n such that the first digit of n represents the count of how many zeros are there in n,
second digit represents the count of how many ones are there in n and so on....
Constraints:n<=10
Sample input: 1210
Sample output:210
Explanation: In zeroth index there is 1,which means 1 zero in n.
In first index there is 2 which means there are 2 one's in n.
In second index there is 1 which means 1 two in n. In third index there's 0 which mean 0 three in n.
  So n is an ABN. Output will be 210 ( 1 should be removed as n is ABN)*/
#include <bits/stdc++.h>
using namespace std;

int main() {
string s,s1;
cin>>s;
int n=s.length();
vector<int>v(n),v2(n);
for(int i=0;i<n;i++){
  s1=s[i];
 v[i]=stoi(s1);
  s1.erase();
}
for(int j=0;j<n;j++){
v2[j]=count(v.begin(),v.end(),j);
}
int res=equal(v.begin(),v.end(),v2.begin());
if(res){
  cout<<s.substr(1,n)<<endl;
}
else{
  cout<<"no"<<endl;
}
}
