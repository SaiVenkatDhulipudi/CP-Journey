/*input:
2
4
ARJUN ARVIND ALOK AKSHAY
2
DEEPAK DIVYANSHU
output:
ALOK 18
DEEPAK 36*/
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int>i,pair<string,int>j){
	return i.second<j.second;
}
int dist(int i,int j)
{
	int k=abs(i-j);
	return min(26-k,k);
}
int main() {
	int T;
	cin>>T;
	while(T--){
	int n,k,m;
		cin>>n;
		string s;
		char c,q;
		vector<pair<string,int>>mp;
		for(int i=0;i<n;i++){
			k=0;
			cin>>s;
			c='A';
			q=s[0];
			m=dist(int(c)-65,int(q)-65);
			for(int j=0;j<s.length();j++){
      k+=dist(int(c)-65,int(q)-65);
			c=s[j];
			q=s[j+1];
			}
			if(m>k){
			  m=k;
			}
			mp.push_back({s,k});
		}
		pair<string,int>min=*min_element(mp.begin(),mp.end(),compare);
	for(auto i:mp){
	  if(i.second==min.second){
	    cout<<i.first<<" "<<i.second<<endl;
	    break;
	  }
	}
	}
}
