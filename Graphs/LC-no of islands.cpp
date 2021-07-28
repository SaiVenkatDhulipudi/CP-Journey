"https://leetcode.com/problems/number-of-islands/"
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
void markisland(vector<vector<char>>&v,int x,int y){
  if(x<0 || x>=n || y<0 || y>=m|| v[x][y]!='1'){
    return;
  }
  v[x][y]='2';
        markisland(v,x+1,y);  
        markisland(v,x,y+1);  
        markisland(v,x-1,y);  
        markisland(v,x,y-1);
}
int main() {
int c=0;
cin>>n>>m;
vector<vector<char>>v(n,vector<char>(m));
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>v[i][j];
    }
  }
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(v[i][j]=='1'){
      markisland(v,i,j);
      c++;
    }
  }
}
cout<<c<<endl;
}
