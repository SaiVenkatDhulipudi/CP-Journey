#include <bits/stdc++.h>

using namespace std;
#define ll long long int
void count_prime(vector<int>&p){
for(ll i=3;i<=1000000;i+=2){
    p[i]=1;
}
for(ll i=3;i<=1000000;i+=2){
    if(p[i]==1){
        for(ll j=i*i;j<=1000000;j=j+i){
            p[j]=0;
        }
    }
}
    p[1]=p[0]=0;
    p[2]=1;
}
int main()
{
  ll n;; 
  cin>>n;
  vector<int>p(1000000);
  int count=0;
  count_prime(p);
  for(ll i=0;i<=n;i++){
     if(p[i]==1){
         cout<<i<<" ";
         count++;
     } 
  }
  cout<<"\n"<<count;
 }
