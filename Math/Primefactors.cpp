#include <bits/stdc++.h>

using namespace std;

int primefactors(int n){
  if(n<=1) return 0;
  while(n%2==0){
    cout<<"2 ";
    n=n/2;
  }
  while(n%3==0){
    cout<<"3 ";
    n=n/3;
  }
  
  for(int i=5;i*i<=n;i+=6){
   while(n%i==0){
     cout<<i<<" ";
     n=n/i;
   }
   while(n%(i+2)==0){
     cout<<i+2<<" ";
     n=n/(i+2);
   }
  }
  if(n>3){
     cout<<n<<" ";
  }
}
int main(){
  int n;cin>>n;
 primefactors(n);
  
}
