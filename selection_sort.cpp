#include <iostream>
using namespace std;
void selection_sort(int *arr,int n){
   int indexofmin,j,i,temp;
  for(i=0;i<n-1;i++){
    indexofmin=n-1;
    for(j=i+1;j<n;j++)
    {
    if(arr[j]<arr[indexofmin])
    {
      indexofmin=j;
    }
    }
    temp=arr[i];
    arr[i]=arr[indexofmin];
    arr[indexofmin]=temp;
  }
  
}

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
selection_sort(a,n);
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
}
