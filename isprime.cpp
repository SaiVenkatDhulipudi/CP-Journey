#include <bits/stdc++.h>

using namespace std;

bool prime(int n){
  if(n==1)return false;
  
 else if(n==2||n==3) return true;
  else{
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0||n%(i+2)==0){
      return false;
      break;
    }
    else{
      return true;
    }
  }
  }
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
