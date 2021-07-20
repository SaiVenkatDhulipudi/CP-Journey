#include <bits/stdc++.h>
using namespace std;
int binary_search(int *a,int m,int k)
{
  int low=0,high=m-1,mid;
  while(low<=high){
    mid=(high+low)/2;
    if(a[mid]==k){
      return mid;
    }
    else if(a[mid]<k){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return -1;
}
int main() {
int n,key;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
cin>>key;
int pos=binary_search(a,n,key);
cout<<pos<<endl;
}
