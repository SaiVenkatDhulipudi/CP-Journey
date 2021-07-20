#include <bits/stdc++.h>
using namespace std;
 void Factors(int n)
{
	int i = 1;
	for(i=1;i*i<n;i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}
	for(i=sqrt(n); i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}

int main(){
  int n;cin>>n;
 Factors(n);
  
}
