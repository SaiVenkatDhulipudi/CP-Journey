/*input 1000
output 1009
explaination: 1009 is the nearest upperbound prime number*/
#include <bits/stdc++.h>
using namespace std;
bool isprime(int k){
  if(k==1)return false;
  if(k==2||k==3)return true;
  if(k%2==0||k%3==0)return false;
  for(int i=5;i<sqrt(k);i+=6){
    if(k%i==0||k%(i+2)==0)return false;
  }
  return true;
}
  
int main() {
int n;
cin>>n;
for(int i=n;i>n-1;i++){
  if(isprime(i)){
    cout<<i<<endl;
    break;
  }
  
}
}
