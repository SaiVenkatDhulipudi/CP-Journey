/*Hey there help me !

Deekshith just opened his laptop, but he relized that he forgot his laptop password which is 4 digital code in "# # # #" format.

Now your task is to find his password, it's hard to decode it but u can decode it with the help of wallpaper As it has "D E E K" in the block .
	INPUT : D E E K;
	OUTPUT :5 6 6 3
Hints :

-> D ASCII value is 68 so 6+8 = 14 => 1+4 = 5
First digit of password is 5 
Find the next 3 digits.*/



#include <bits/stdc++.h>
using namespace std;
int password(vector<int>&a){
for(int i=0;i<a.size();i++){
 if(a[i]==0){
   a[i]==0;
 } 
 else if(a[i]%9==0){
   a[i]==9;
 }
 else{
   a[i]=a[i]%9;
 }
}
}

int main() {
	vector<int>v;
char c;
while(cin>>c){
  int k= int(c);
v.push_back(k);
}

password(v);

for(auto i:v){
  cout<<i<<" ";
}
}
