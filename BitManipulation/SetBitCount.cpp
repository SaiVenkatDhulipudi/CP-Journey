#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
int n;
cin>>n;
int c=0;
while(n!=0){
  n=n&(n-1);
  c+=1;
}
cout<<c;
}
