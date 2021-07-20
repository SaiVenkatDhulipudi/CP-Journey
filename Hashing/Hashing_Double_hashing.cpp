/*DOUBLE HASHING: 
* IT IS A TYPE OF OPEN ADDRESSING 
* WE USE TWO HASH FUNCTIONS
H1(KEY)=KEY % N WHERE N= SIZE OF CONTAINER
H2(KEY)=((N-1)-KEY % N-1) 
HASH(KEY)=(H1(KEY)+I*H2(KEY))%N WHERE I=0 INTIALLY
WHEN COLLISON OCCURS
WE INCREMENTS I BY 1 UNTIL WE FIND AN EMPTY SLOT
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
I 2
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
element already exists
*/
#include <bits/stdc++.h>
using namespace std;
int ospace=0;
void print(vector<int>&v){
  for(auto i:v){
    if(i!=-1)cout<<i<<" ";
  }
  cout<<endl;
}
bool searchkey(vector<int>&v,int n,int ikey){
   int i=0,h1=ikey%n,h2=(n-1)+ikey%(n-1);
     while(i<n){
       if(v[(h1+i*h2)%n]==ikey){
         return true;
       }
       i++;
     }
     return false;
}
bool removekey(vector<int>&v,int n,int ikey){
  int i=0,h1=ikey%n,h2=(n-1)+ikey%(n-1);
     while(i<n){
       if(v[(h1+i*h2)%n]==ikey){
         v[(h1+i*h2)%n]=-1;
         ospace++;
         return true;
       }
       i++;
     }
return false;
}
bool insertkey(vector<int>&v,int n,int ikey){
    if(ospace==n){
      cout<<"Hash container is full"<<endl;
    }
    else{
     int i=0,h1=ikey%n,h2=(n-1)+ikey%(n-1);
     while(i<n){
       if(v[(h1+i*h2)%n]==ikey){
         cout<<"element already exists"<<endl;
         return false;
       }
       else if(v[(h1+i*h2)%n]==-1){
         ospace--;
         v[(h1+i*h2)%n]=ikey;
         return true;
       }
       i++;
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
    if(insertkey(v,n,ikey)){
    cout<<"after inserting :"<<ikey<<endl;
    print(v);
  }
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
