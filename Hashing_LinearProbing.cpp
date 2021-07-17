LINEAR PROBING: 
* IT IS A TYPE OF OPEN ADDRESSING 
* IT REFERS TO "LINEARLY SEARCHING FOR THE NEXT EMPTY SLOT WHEN COLLISION OCCURS"
* BACKDROP IS PRIMARY CLUSTERING
HASH(KEY)=KEY % N WHERE N= SIZE OF CONTAINER 
WHEN COLLISON OCCURS
HASH(KEY)=((KEY % N) +I)%N
/*
for better understanding I have divided the operations to do as 
"S-SEARCH",
"I-INSERT",
"R-REMOVE"
Input:
7
6
I 1
I 2 
S 20 
I 23 
R 1
I 20
OUTPUT:
after inserting :1
1 
after inserting :2
1 2 
20 was not found
after inserting :23
1 2 23 
after removing :1
2 23 
after inserting :20
2 23 20 
*/
#include <bits/stdc++.h>
using namespace std;
int ospace=0;
void print(vector<int>&v){                                    //PRINTING
  for(auto i:v){
    if(i!=-1)cout<<i<<" ";
  }
  cout<<endl;
}
bool searchkey(vector<int>&v,int n,int skey){                 //SEARCHING
   int j=skey%n;                                           
      while(v[j]!=-1){
          if(v[j]==skey){
            return true;
          }
          j++%n;
          if(j==skey%n){
            return false;
          }
        }
return false;
}
bool removekey(vector<int>&v,int n,int rkey){                  //REMOVING
  int j=rkey%n;
      while(v[j]!=-1){
          if(v[j]==rkey){
            v[j]=-1;
            ospace--;
            return true;
          }
          j++%n;
          if(j==rkey%n){
            return false;
          }
        }
return false;
}
void insertkey(vector<int>&v,int n,int ikey){                  //INSERTING
   int j=ikey%n;
    if(ospace==n){
      cout<<"Hash container is full"<<endl;
    }
    else{
      ospace++;
    if(v[j]==-1){
      v[j]=ikey;
    }
      else{
        while(j++%n){
          if(v[j]==-1){
            v[j]=ikey;
            break;
          }
        }
      }
  }
}
int main() {
  int n;
  cin>>n;
vector<int>v(n,-1);
int T;
cin>>T;
while(T--){
  char c;
  cin>>c;
  if(c=='I'){
    int ikey;
    cin>>ikey;
    insertkey(v,n,ikey);
    cout<<"after inserting :"<<ikey<<endl;
    print(v);
   }
   else if(c=='R'){
     int rkey;
     cin>>rkey;
     if(removekey(v,n,rkey)){
       cout<<"after removing :"<<rkey<<endl;
       print(v);
     }
     else{
       cout<<"element not found"<<endl;
     }
   }
    else if(c=='S'){
     int skey;
     cin>>skey;
     if(searchkey(v,n,skey)){
       cout<<skey<<" was found"<<endl;
     }
     else{
       cout<<skey<<" was not found"<<endl;
     }
   }
}
}
