/*INPUT:
Mike 3 1 2 -6
jake 4 3 4 5 7   
samuel 5 1 2 3 4 100
Thomas 5 10 20 30 40 100
Brute 5 10 20 30 40 100
Sizzi 5 1 2 3 4 100
OUTPUT:
Brute
Sizzi
Thomas
jake
samuel*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	map<string,vector<int>>mp;
	for(int i=0;i<n;i++){
	  string s;;
	  cin>>s;
	  int m,k;
	  cin>>m;
	  for(int j=0;j<m;j++){
	    cin>>k;
	    mp[s].push_back(k);
	  }
	}
	for(auto i:mp){
	  if(is_sorted(i.second.begin(),i.second.end())){
	    cout<<i.first<<endl;
	  }
	}
}
