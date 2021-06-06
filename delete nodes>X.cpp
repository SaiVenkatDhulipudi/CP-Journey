#include <bits/stdc++.h>
using namespace std;

int main() {
	list<int>l;
	int key,n,size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
	  cin>>n;
	  l.push_back(n);
	
}
cin>>key;
for(auto i:l){
  if(i<=key){
    cout<<i<<endl;
  }
  
}
}
