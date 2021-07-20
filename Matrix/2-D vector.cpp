#include <bits/stdc++.h>
using namespace std;
int print(vector<vector<int>> &vec,int p,int q){
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        { 
          
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
 
}

int main() {
  int m,n,k;
  cin>>n;
  cin>>m;
vector<vector<int>> vec( n , vector<int> (m));
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        { 
          cin>>k;
            vec[i][j] =k ;
        }
    }
    print(vec,n,m);
}
