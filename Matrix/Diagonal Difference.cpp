https://www.hackerrank.com/challenges/diagonal-difference/problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l=0,r=0;
    cin>>n;
    vector<vector<int>> v( n , vector<int> (n));
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        { 
          cin>>v[i][j] ;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        { 
            if(i==j){
                l+=v[i][j];
            }
        }
}
for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        { 
             if(i+j==n-1){
                r+=v[i][j];
            }
        }
}

cout<<abs(l-r)<<endl;
}
