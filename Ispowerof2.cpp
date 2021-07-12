#include <bits/stdc++.h>
using namespace std;
bool powerof2(int n){

return(n!=0&&(n&(n-1))==0);

}
int main() {
int n;
cin>>n;
if(powerof2(n))cout<<"YES"<<endl;
else{
  cout<<"NO"<<endl;
}
}
