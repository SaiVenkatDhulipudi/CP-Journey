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

int main() {
	int a,b;
	cin>>a>>b;
	int g=EGCD(a,b);
	cout<<g<<endl;
}
