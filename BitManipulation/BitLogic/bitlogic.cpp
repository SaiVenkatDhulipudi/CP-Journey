#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,k;
	cin>>l>>r>>k;
	set<int>s;
for(int i=l;i<=r;i++){
    for(int j=i;j<=r;j++){
        int xr=j^i;
       s.insert(xr);
    }
}
auto it=lower_bound(s.begin(),s.end(),k);
cout<<*it<<endl;
}
