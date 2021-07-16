/*
for better understanding I have divided the operations to do as 
"S-SEARCH",
"I-INSERT",
"R-REMOVE"
INPUT:
11
1 2 3 4 5 9 22 10 20 30 40 
4
S 20
I 23
R 1
I 30
OUTPUT:
Before Performing Operations: 22 1 2 3 4 5 20 40 30 9 10 
Element Found
After Inserting : 23
22 1 2 3 4 5 20 40 30 9 10 23 
After Removing : 1
22 2 3 4 5 20 40 30 9 10 23 
After Inserting : 30
22 2 3 4 5 20 40 30 9 10 23 30 
*/
#include <bits/stdc++.h>
using namespace std;
void print(map<int,int>mp){                           //Printing
 for(auto i:mp){
    cout<<i.second<<" ";
  }
}
void insertkey(map<int,int>&mp,int n,int ikey){       //Inserting
  n+=1;
  mp[n-1]=ikey;
  cout<<"\nAfter Inserting : "<<ikey<<endl;
  print(mp);
}
int searchkey(map<int,int>&mp,int j,int skey){       //Searching
  if(mp[j]==skey){
  return j;
  }
  else{
   for(auto i:mp){
    if(i.second==skey){
       return i.first;
    }
   }
  }
  return -1;
}
int main() {
  int n,k;
  cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
  cin>>k;
  int j=k%n;
  if((j==(n-1)&&mp[n-1]!=0)||mp[j]!=0){j=0;}
  for(int m=j;m<n;m++){
    if(mp[m]==0){
      mp[m]=k;
      break;
    }
  }
}
cout<<"Before Performing Operations: ";
  print(mp);
  int T;
  cin>>T;
while(T--){
  char c;
  cin>>c;
  if(c=='I'){
  int ikey;
  cin>>ikey;
   n+=1;
  insertkey(mp,n,ikey);
  }
  else if(c=='S'){
    int skey;
    cin>>skey;
    int j=skey%n;
 if(searchkey(mp,j,skey)!=-1){
   cout<<"\nElement Found";
 }
 else{
   cout<<"\nElement Was Not Found";
 }
  
}
else if(c=='R'){   
                                                     //Removing
  int delkey;
  cin>>delkey;
  int j=delkey%n;
  int p=searchkey(mp,j,delkey);
    if(p!=-1){
      mp.erase(p);
      cout<<"\nAfter Removing : "<<delkey<<endl;
      print(mp);
    }
    else{
      cout<<"\n"<<delkey<<" Was Not Found!"<<endl;
    }
  }
}
}
