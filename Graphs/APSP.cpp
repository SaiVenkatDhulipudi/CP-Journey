//floyd warshall algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v,e;
	cin>>v>>e;
	vector<vector<int>>mp(v,vector<int>(v,INT_MAX));
	for(int i=0;i<e;i++)
	{
		int s,d,w;
		cin>>s>>d>>w;
		mp[s][d]=w;
		mp[d][s]=w;
	}
	int i=0,j=0;
	while(i<v){
		mp[i][j]=0;
		j++;
		i++;
	}
	for(int k=0;k<v;k++)
	{
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j] and mp[k][j]!=INT_MAX and mp[i][k]!=INT_MAX){
					mp[i][j]=mp[i][k]+mp[k][j];
				}
			}
		}
	}
for(int i=0;i<v;i++)
{
	for(int j=0;j<v;j++)
	{
		cout<<mp[i][j]<<" ";
	}
	cout<<endl;
}
}
