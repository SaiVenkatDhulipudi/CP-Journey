#include <iostream>
using namespace std;
void insertion_sort(int *arr,int n){
   int key,j;
  for(int i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
  
}

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
insertion_sort(a,n);
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
}
