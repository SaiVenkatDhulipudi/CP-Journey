#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int xorFrom1ToN(int n){
  if(n%4==0){
    return n;
  }
  else if(n%4==1){
    return 1;
  }
  else if(n%4==2){
    return n+1;
  }
  else{
    return 0;
  }
}
int main() {
int n;
cin>>n;
cout << xorFrom1ToN(n) <<endl;
}
