/*input:n=5,k=3
output:YES
EXPLANATION:
binary reprsentation of 5 is: 000....0101*/
#include <bits/stdc++.h>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
if(n&(1<<(k-1))!=0){
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}
}
