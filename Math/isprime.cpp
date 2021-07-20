#include <bits/stdc++.h>

using namespace std;

bool prime(int n){
  if(n==1)return false;
  
 else if(n==2||n==3) return true;
 else if(n%2==0||n%3==0)return false;
  else{
  for(int i=5;i<=sqrt(n);i+=6){
    if(n%i==0||n%(i+2)==0){
      return false;
      break;
    }
  }
  }
    return true;
}
int main(){
  int n;cin>>n;
  if(prime(n)){
    cout<<"primenumber"<<endl;
  }
  else{
    cout<<"not a prime"<<endl;
  }
  
}
