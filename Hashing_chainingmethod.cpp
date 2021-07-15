/*
for better understanding I have divided the operations to do as 
"S-SEARCH",
"I-INSERT",
"R-REMOVE"
Input:
10
50 21 58 17 15 49 56 22 23 25
3
S 55
I 21
R 21
Output:
Before Performing Operations
21 49 56 50 15 22 58 23 17 25 
After Searching
55 is not found
aftering inserting:21
21 49 56 21 50 15 22 58 23 17 25 
aftering deleting:21
49 56 50 15 22 58 23 17 25 */
PROGRAM:
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
bool searchkey(map<int,list<int>>&mp,int key){
 for(auto i:mp[key%7]){
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
for(int i=0;i<n;i++){
  cin>>k;
  mp[k%7].push_back(k);
}
cout<<"Before Performing Operations"<<endl;
print(mp);
int T;
cin>>T;
while(T--){
char c;
cin>>c;
int skey, ikey,rkey;
if(c=='S'){                                        //searching an element
cin>>skey;
cout<<"After Searching"<<endl;
if(searchkey(mp,skey)){
  cout<<skey<<" is found\n";
 }
else {
  cout<<skey<<" is not found\n";
}
}
else if(c=='I') {                                   //inserting an element
cin>>ikey;
mp[ikey%7].push_back(ikey);
cout<<"aftering inserting:"<<ikey<<endl;
print(mp);
}
else if(c=='R'){                                    //deleting an element
cin>>rkey;
cout<<"aftering deleting:"<<rkey<<endl;
mp[rkey%7].remove(rkey);
print(mp);
}
}
}
