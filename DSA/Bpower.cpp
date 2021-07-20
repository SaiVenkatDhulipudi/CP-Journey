#binaryexponentiation
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(int x,int n){
  ll m=1e+9;
ll res=1;
while(n>0){
  if(n%2!=0)res=(res*x)%m;
x=(x*x)%m;
n=n/2;
}
return res;
}

int main() {
	ll x,n;
	cin>>x>>n;
	cout<<power(x,n)<<endl;

}
