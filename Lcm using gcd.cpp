#include <bits/stdc++.h>
using namespace std;
int EGCD(int a,int b){
  if(b==0){
    return a;
  }
  else{
    return EGCD(b,a%b);
  }
}
int lcm(int a,int b){
  return(a*b)/EGCD(a,b);
}

int main() {
	int a,b;
	cin>>a>>b;
	int l=lcm(a,b);
	cout<<l<<endl;
}
