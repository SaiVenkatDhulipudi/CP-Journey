/*input:
4
I am a Computer Science Student
I am your Senior
I ma a oCpmture cSeicne tSdunet
I ma oyru eSinro
output:
I ma a oCpmture cSeicne tSdunet 
I ma oyru eSinro 
I am a Computer Science Student 
I am your Senior */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	string s;
	getline(cin,s);
while(T--){
map<int,string>mp;
getline(cin,s);
 string s1;
 istringstream s2(s);
 int i=0;
while(s2>>s1){
  if(s1.length()>1){
   for(int k=0;k<s1.length()-1;k+=2){
   swap(s1[k],s1[k+1]);
   }
   cout<<s1<<" ";
    }
    else{
      cout<<s1<<" ";
    }

i++;
}
cout<<endl;
}
}
