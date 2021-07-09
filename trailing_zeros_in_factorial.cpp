/*it gives no of zero in factorial of given number*/
/*if n=5
   n!=120
no of zeros=1*/
	

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int res=0;
	for(int i=5;i<=n;i*=5){
	  res+=n/i;
	}
	cout<<res<<endl;
}
