/*
CHAINING METHOD:
* WE USE LINKED LIST TO STORE THE VALUES WITH THE SAME HASH FUNCTION
* HASH(KEY)=KEY % N;
* BACK DROP IS CACHE AS WE USE LINKED LIST

for better understanding I have divided the operations to do as 
"S-SEARCH",
"I-INSERT",
"R-REMOVE"
Input:
7
7
I 55
I 2
I 21
S 55
I 2100
R 21
I 6
OUTPUT:
aftering inserting:55
55 
aftering inserting:2
2 55 
aftering inserting:21
21 2 55 
After Searching
55 is found
aftering inserting:2100
21 2100 2 55 
aftering deleting:21
2100 2 55 
aftering inserting:6
2100 2 55 6 
*/
#include <bits/stdc++.h>
using namespace std;
void print(map<int,list<int>>&mp){
  for(auto i:mp){
  for(auto j:i.second){
    cout<<j<<" ";
  }
}
cout<<endl;
}
bool searchkey(map<int,list<int>>&mp,int key,int n){
 for(auto i:mp[key%n]){
   if(i==key){
     return true;
   }
 }
 return false;
}
int main() {
int n,k;
cin>>n;
map<int,list<int>>mp;
int T;
cin>>T;
while(T--){
char c;
cin>>c;
int skey, ikey,rkey;
if(c=='S'){                                        //searching an element
cin>>skey;
cout<<"After Searching"<<endl;
if(searchkey(mp,skey,n)){
  cout<<skey<<" was found\n";
 }
else {
  cout<<skey<<" was not found\n";
}
}
else if(c=='I') {                                   //inserting an element
cin>>ikey;
if(searchkey(mp,ikey,n)){
   cout<<"element already exists"<<endl;
}
else{
mp[ikey%n].push_back(ikey);
cout<<"aftering inserting:"<<ikey<<endl;
print(mp);
}
}
else if(c=='R'){                                    //deleting an element
cin>>rkey;
cout<<"aftering deleting:"<<rkey<<endl;
mp[rkey%n].remove(rkey);
print(mp);
}
}
}
