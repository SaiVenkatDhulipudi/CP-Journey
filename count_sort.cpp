#include <bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
  for(auto k:v){
    cout<<k<<" ";
  }
}

void count_sort(vector<int>&v){
  int n=v.size();
  int i,j,max=*max_element(v.begin(),v.end());
  vector<int>count(max+1,0);
   for (i = 0; i < n; i++)
    {
        count[v[i]] = count[v[i]] + 1; 
    }
    i =0; 
    j =0;
     while(i<= max){
        if(count[i]>0){
            v[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    }
  
}

int main()
{
int m;
vector<int>v;
while(cin>>m){
  v.push_back(m);
}
count_sort(v);
print(v);

}
